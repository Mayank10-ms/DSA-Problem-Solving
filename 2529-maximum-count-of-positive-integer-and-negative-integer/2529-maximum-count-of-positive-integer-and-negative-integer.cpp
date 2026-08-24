class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count1 = 0;
        int count2 =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]<0){
                count1++;
            }
            if(nums[i]>0){
                count2++;
            }
        }
        int ans = max(count1,count2);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna