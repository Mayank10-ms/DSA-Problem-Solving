class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int>q;

        vector<bool>visited(n,false);
        q.push(0);
        visited[0]=true;

        while(!q.empty()){
            int newKey = q.front();
            q.pop();

            for(int key : rooms[newKey]){
                if(!visited[key]){
                    visited[key]=true;
                    q.push(key);
                }
            }
        }
        for(bool v : visited){
            if(!v){
                return false;
            }
        }
         return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna