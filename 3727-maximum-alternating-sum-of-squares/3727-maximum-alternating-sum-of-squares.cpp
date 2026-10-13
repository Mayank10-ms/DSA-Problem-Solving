class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
       int n = nums.size();
       for(int i =0;i<nums.size();i++){
        nums[i]=nums[i]*nums[i];
       }
       sort(nums.begin(),nums.end());
       long long ans = 0;
       long long mid = n/2;

       for(int i =0;i<mid;i++){
        ans-=nums[i];
       }
       for(int i = mid;i<n;i++){
        ans+=nums[i];
       }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna