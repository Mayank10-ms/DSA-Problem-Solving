class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        //int start = 0;
        for(int i =0;i<n;i++){
            int start = max(0,i-nums[i]);
            for(int j =start;j<=i;j++){
                sum+=nums[j];
            }
            
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna