class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i =0;i<n-1;i++){
            int leftSum = 0;
            int rightSum = 0;
            for(int j = 0;j<=i;j++){
                leftSum +=nums[j];
            }
            for(int j=i+1;j<n;j++){
                rightSum+=nums[j];
            }
            int diff = leftSum - rightSum;
            if(diff%2==0) {
                count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna