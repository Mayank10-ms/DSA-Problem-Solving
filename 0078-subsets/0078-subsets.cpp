class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       int n = nums.size();
       vector<vector<int>>ans={{}};
       for(int num : nums){
        int s = ans.size();
        for(int i =0;i<s;i++){
            vector<int>temp=ans[i];
            temp.push_back(num);
            ans.push_back(temp);
        }
       } 
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna