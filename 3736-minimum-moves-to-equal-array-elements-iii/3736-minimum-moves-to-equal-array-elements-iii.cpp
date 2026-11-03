class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
         int maxi = *max_element(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            count += maxi - nums[i];
        }
     return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna