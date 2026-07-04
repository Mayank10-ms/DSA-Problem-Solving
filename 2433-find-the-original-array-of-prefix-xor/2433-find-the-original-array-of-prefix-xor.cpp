class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       int n = pref.size();
       vector<int>ans(n);
       ans[0]=pref[0];
       for(int i =1;i<n;i++){
            ans[i]=pref[i]^pref[i-1];
       } 
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna