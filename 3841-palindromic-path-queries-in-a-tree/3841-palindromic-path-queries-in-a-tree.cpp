
class Solution {
    vector<vector<int>> adj;
    vector<int> parent, depth, sz, heavy, head, pos;
    int timer = 0;

    vector<int> seg;
    int n;

    int getMask(char c) {
        return 1 << (c - 'a');
    }
    void dfs1(int u, int p) {
        parent[u] = p;
        sz[u] = 1;
        heavy[u] = -1;

        int maxSize = 0;

        for (int v : adj[u]) {
            if (v == p) continue;

            depth[v] = depth[u] + 1;
            dfs1(v, u);

            sz[u] += sz[v];

            if (sz[v] > maxSize) {
                maxSize = sz[v];
                heavy[u] = v;
            }
        }
    }
    void dfs2(int u, int h, string& s) {
        head[u] = h;
        pos[u] = timer++;

        if (heavy[u] != -1) {
            dfs2(heavy[u], h, s);
        }

        for (int v : adj[u]) {
            if (v == parent[u] || v == heavy[u])
                continue;

            dfs2(v, v, s);
        }
    }
    void build(int node, int l, int r, vector<int>& arr) {
        if (l == r) {
            seg[node] = arr[l];
            return;
        }

        int mid = (l + r) / 2;

        build(node * 2, l, mid, arr);
        build(node * 2 + 1, mid + 1, r, arr);

        seg[node] = seg[node * 2] ^ seg[node * 2 + 1];
    }
    void update(int node, int l, int r, int idx, int val) {
        if (l == r) {
            seg[node] = val;
            return;
        }

        int mid = (l + r) / 2;

        if (idx <= mid)
            update(node * 2, l, mid, idx, val);
        else
            update(node * 2 + 1, mid + 1, r, idx, val);

        seg[node] = seg[node * 2] ^ seg[node * 2 + 1];
    }
    int query(int node, int l, int r, int ql, int qr) {
        if (qr < l || r < ql)
            return 0;

        if (ql <= l && r <= qr)
            return seg[node];

        int mid = (l + r) / 2;

        return query(node * 2, l, mid, ql, qr) ^
               query(node * 2 + 1, mid + 1, r, ql, qr);
    }
    int pathQuery(int u, int v) {
        int mask = 0;

        while (head[u] != head[v]) {
            if (depth[head[u]] < depth[head[v]])
                swap(u, v);

            mask ^= query(
                1, 0, n - 1,
                pos[head[u]], pos[u]
            );

            u = parent[head[u]];
        }

        if (depth[u] > depth[v])
            swap(u, v);

        mask ^= query(1, 0, n - 1, pos[u], pos[v]);

        return mask;
    }

public:
    vector<bool> palindromePath(
        int n,
        vector<vector<int>>& edges,
        string s,
        vector<string>& queries
    ) {
        this->n = n;
        timer = 0;

        adj.assign(n, {});
        parent.resize(n);
        depth.assign(n, 0);
        sz.resize(n);
        heavy.resize(n);
        head.resize(n);
        pos.resize(n);

        for (auto& e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs1(0, -1);
        dfs2(0, 0, s);

        vector<int> arr(n);

        for (int u = 0; u < n; u++) {
            arr[pos[u]] = getMask(s[u]);
        }

        seg.assign(4 * n, 0);
        build(1, 0, n - 1, arr);

        vector<bool> ans;

        for (string& q : queries) {
            string type;
            int u;
            string x;

            stringstream ss(q);
            ss >> type >> u >> x;

            if (type == "update") {
                char c = x[0];

                s[u] = c;

                update(
                    1, 0, n - 1,
                    pos[u], getMask(c)
                );
            } else {
                int v = stoi(x);
                int mask = pathQuery(u, v);

                ans.push_back((mask & (mask - 1)) == 0);
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna