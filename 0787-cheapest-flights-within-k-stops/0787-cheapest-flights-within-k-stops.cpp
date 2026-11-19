class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        
        for(auto &e : flights){
            int u = e[0];
            int v = e[1];
            int f = e[2];

            adj[u].push_back({v,f});
        }

        queue<tuple<int,int,int>>q;

        q.push({0,src,0});
 
        vector<vector<int>> dist(
            k + 2, vector<int>(n, INT_MAX)
        );

        q.push({0, src, 0});
        dist[0][src] = 0;

        while (!q.empty()) {

            auto [cost, city, flightsTaken] = q.front();
            q.pop();

            if (cost > dist[flightsTaken][city])
                continue;

            if (flightsTaken == k + 1)
                continue;

            for (auto it : adj[city]) {

                int nextCity = it.first;
                int price = it.second;

                int newCost = cost + price;
                int newFlights = flightsTaken + 1;

                if (newCost < dist[newFlights][nextCity]) {

                    dist[newFlights][nextCity] = newCost;

                    q.push({
                        newCost,
                        nextCity,
                        newFlights
                    });
                }
            }
        }

        int mini = INT_MAX;

        for (int i = 0; i <= k + 1; i++) {
            mini = min(mini, dist[i][dst]);
        }

        return mini == INT_MAX ? -1 : mini;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna