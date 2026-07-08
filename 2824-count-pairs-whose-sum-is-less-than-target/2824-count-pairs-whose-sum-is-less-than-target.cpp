class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 0;
        int low = 0;
        int high = n-1;
        while(low < high){
        if(nums[low]+nums[high]<target){
               count+=high-low;
               low++;
         }
         else {
            high--;
         }
      }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna