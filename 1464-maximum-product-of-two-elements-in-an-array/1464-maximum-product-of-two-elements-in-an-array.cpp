class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = -1;
        int sec_max = -1;
        for(int num:nums){
            if(num>maxi){
                sec_max=maxi;
                maxi=num;
            }
            else if(num>sec_max){
                sec_max=num;
            }
        }
        return (maxi-1)*(sec_max-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna