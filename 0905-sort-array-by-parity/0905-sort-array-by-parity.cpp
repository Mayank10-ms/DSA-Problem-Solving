class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left =0;
        int right =0;
        while(left<nums.size()){
            if(nums[left]%2==0){
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
            else{
                left++;
            }
        }
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna