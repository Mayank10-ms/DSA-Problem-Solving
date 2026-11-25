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
        return parent[x]=findUpar(parent[x]);
     }

     void UnionBySize(int u, int v){
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
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }
        DisjointSet ds(n);

        int extraEdges = 0;

        for(auto &edge : connections){
            int u = edge[0];
            int v = edge[1];

            if(ds.findUpar(u)==ds.findUpar(v)){
                extraEdges++;
            }
            else{
                ds.UnionBySize(u,v);
            }
        }
        int component = 0;

        for(int i =0;i<n;i++){
            if(ds.findUpar(i)==i){
                component++;
            }
        }
        int operations= component-1;
        if(extraEdges>=operations){
            return operations;
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna