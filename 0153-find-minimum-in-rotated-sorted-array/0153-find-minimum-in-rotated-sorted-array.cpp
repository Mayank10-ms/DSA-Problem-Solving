class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i]<ans){
                ans = nums[i];
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna