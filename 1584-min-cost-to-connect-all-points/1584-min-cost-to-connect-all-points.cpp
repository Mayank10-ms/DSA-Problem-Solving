class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        int total_cost = 0;

        vector<int>vis(n,0);

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        pq.push({0,0});

        while(!pq.empty()){
            auto[wt,node] = pq.top();
            pq.pop();

            if(vis[node]) continue;

            vis[node]=true;

            total_cost += wt;

            for(int j =0;j<n;j++){
                if(j==node) continue;
                if(vis[j]) continue;

                int newCost = abs(points[node][0] - points[j][0]) + abs(points[node][1] - points[j][1]);

                pq.push({newCost,j});
            }
        }
        return total_cost;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna