class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        //0 to n-1
        //red or blue
        //can be self-edges and parallel
        //redEdge-> a[i].push_back(b[i])
        //blueEdge->u[i].push_back(v[i])
        
        //vector<vector<int>>adjred(0,2);

        vector<vector<int>>adjred(n);
        vector<vector<int>>adjblue(n);

        for(auto &e : redEdges){
            int u = e[0];
            int v = e[1];

          adjred[u].push_back(v);
        }

        for(auto & c : blueEdges){
            int u = c[0];
            int v = c[1];

            adjblue[u].push_back(v);
        }

        vector<vector<int>>dist(n,vector<int>(2,-1));

        queue<pair<int,int>>q;

        vector<vector<int>>visited(n,vector<int>(2,0));

        q.push({0,0});
        q.push({0,1});

        dist[0][0]=0;
        dist[0][1]=0;
        
        visited[0][0] = 1;
        visited[0][1] = 1;

        while(!q.empty()){
            auto[node,lastColor]=q.front();
            q.pop();

            int nextColor = 1-lastColor;

            if(nextColor==0){
                 for (int nextNode : adjred[node]) {
                    if(visited[nextNode][0]==0){
                        visited[nextNode][0]=1;
                        dist[nextNode][nextColor]=dist[node][lastColor]+1;
                        q.push({nextNode,nextColor});
                 }
              }
            }

            else{
                if(nextColor==1){
                    for(int nextNode : adjblue[node]){
                        if(visited[nextNode][1]==0){
                            visited[nextNode][1]=1;
                            dist[nextNode][nextColor]=dist[node][lastColor]+1;
                            q.push({nextNode,nextColor});
                        }
                    }
                }

            }

        }
        vector<int>ans(n,-1);
        for(int i =0;i<n;i++){
            if (dist[i][0] == -1) {
                ans[i] = dist[i][1];
            }
            else if (dist[i][1] == -1) {
                ans[i] = dist[i][0];
            }
            else {
                ans[i] = min(dist[i][0], dist[i][1]);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna