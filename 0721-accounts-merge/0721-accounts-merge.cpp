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
    int findUpar(int x){
        if(parent[x]==x){
            return x;
        }
        else{
            return parent[x]=findUpar(parent[x]);
        }
    }
    void unionbysize(int u, int v){
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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {

        int n = accounts.size();
        unordered_map<string,int>mp;

        DisjointSet ds(n);

        for(int i =0;i<n;i++){
            for(int j = 1;j<accounts[i].size();j++){
                string mail = accounts[i][j];

                if(mp.find(mail)!=mp.end()){
                    ds.unionbysize(i,mp[mail]);
                }
                else{
                    mp[mail]=i;
                }

            }
        }

        vector<vector<string>> mergedMail(n);

        for(auto &it : mp) {

            string mail = it.first;

            int node = ds.findUpar(it.second);

            mergedMail[node].push_back(mail);
        }

          vector<vector<string>> ans;

        for(int i = 0; i < n; i++) {

            if(mergedMail[i].empty()) continue;

            sort(mergedMail[i].begin(), mergedMail[i].end());

            vector<string> temp;

            temp.push_back(accounts[i][0]);

            for(auto &mail : mergedMail[i]) {
                temp.push_back(mail);
            }

            ans.push_back(temp);
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna