class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

       vector<vector<int>>adj(numCourses);
       vector<int>indegree(numCourses,0);

       for(auto &p : prerequisites){
        int u = p[1];
        int v = p[0];

        adj[u].push_back(v);
        indegree[v]++;
       } 

       queue<int>q;
    
       for(int i =0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
       }
        int count = 0;

       while(!q.empty()){
        int curr = q.front();
        q.pop();
        count++;

        for(int neighbors : adj[curr]){
            indegree[neighbors]--;

            if(indegree[neighbors]==0){
                q.push(neighbors);
            }
          }
       }
    return count == numCourses;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna