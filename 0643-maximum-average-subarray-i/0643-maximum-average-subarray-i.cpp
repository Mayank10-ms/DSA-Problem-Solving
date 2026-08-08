class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double window = 0;
        double ans = INT_MIN;

        for(int right = 0;right<nums.size();right++){
           window +=nums[right];

           if(right-left+1==k){
            ans = max(ans,window);
            window-=nums[left];
            left++;
           }
         }
         return ans/k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna