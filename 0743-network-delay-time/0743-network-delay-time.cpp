class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

     vector<vector<pair<int,int>>>adj(n+1);
     

     for(auto &t:times){
        int u = t[0];
        int v = t[1];
        int w = t[2];

        adj[u].push_back({v,w});
     }


     vector<int>dist(n+1,INT_MAX);
     dist[k]=0;

     pq.push({0,k});

     while(!pq.empty()){
        auto[d,node]=pq.top();
        pq.pop();

        for(auto it : adj[node]){
            int neighbour = it.first;
            int weight = it.second;
        
          int newDist = d+weight;


          if(newDist < dist[neighbour]) {
             dist[neighbour] = newDist;
            pq.push({newDist, neighbour});
          }
       }

     }
      int maxi = 0;

        for(int i = 1; i <= n; i++) {
            if(dist[i] == INT_MAX) {
                return -1;
            }

            maxi = max(maxi, dist[i]);
        }

        return maxi;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna