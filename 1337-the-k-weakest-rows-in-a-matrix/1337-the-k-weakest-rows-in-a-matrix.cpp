//1 for soldier and 0 for civilians


class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        priority_queue<pair<int,int>>pq;
        for(int i =0;i<n;i++){
        int count = 0;
         for(int j = 0;j<m;j++){
            if(mat[i][j]==1) count++;
         }
            pq.push({count,i});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna