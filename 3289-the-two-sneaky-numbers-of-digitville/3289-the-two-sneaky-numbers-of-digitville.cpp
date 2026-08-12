class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       vector<int>ans;
       for(int i =0;i<nums.size();i++){
        for(int j =i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                ans.push_back(nums[i]);
            }
        }
       }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna