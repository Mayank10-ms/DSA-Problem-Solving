class Solution {
  public:
  
    vector<vector<int>>adjs;
    vector<vector<int>>adjT;
    
    vector<int>vis;
    stack<int>st;
  
    void dfs(int node){
        vis[node]=1;
        
        for(auto it : adjs[node]){
        
        if(!vis[it]){
            dfs(it);
        }
    }
        
        st.push(node);
    }
    
    void dfs2(int node){
        vis[node]=1;
        
        for(auto it : adjT[node]){
            if(!vis[it]){
                dfs2(it);
            }
        }
    }
    
    int countSCC(vector<vector<int>>& adj) {
        // code here
        int n = adj.size();
        adjs=adj;
        
        vis.assign(n,0);
        adjT.resize(n,{});
        
        for(int i =0;i<n;i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        
        for(int i =0;i<n;i++){
            for(auto it : adjs[i]){
                adjT[it].push_back(i);
            }
        }
        
         vis.assign(n,0);
        
        int count = 0;
        
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            if(!vis[node]){
                count++;
                dfs2(node);
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna