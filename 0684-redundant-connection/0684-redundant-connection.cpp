class DisjointSet{
    public:
      vector<int>parent;
      vector<int>size;

    DisjointSet(int n){
        parent.resize(n);
        size.resize(n,1);

        for(int i =0;i<n;i++){
            parent[i]=i;
        }
    }


    int findUpar(int node){
            if(parent[node]==node){
                return node;
            }
           return parent[node]=findUpar(parent[node]);
        }
     void unionBySize(int u, int v){
            int a = findUpar(u);
            int b = findUpar(v);

            if(a==b) return;
            if(size[a]<size[b]){
                parent[a]=b;
                size[b]+=size[a];
            }
            else{
                parent[b]=a;
                size[a]+=size[b];
            }
        }
    };

class Solution {
public:

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
         int n = edges.size();

        DisjointSet ds(n + 1);

        for(auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];

            if(ds.findUpar(u) == ds.findUpar(v)) {
                return {u, v};
            }

            ds.unionBySize(u, v);
        }

        return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna