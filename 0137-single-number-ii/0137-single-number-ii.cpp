class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans = 0;
       for(int bits =0;bits<32;bits++){
            int count =0;
            for(int x:nums){
                if((x>>bits)&1)
                    count++;
            }
            if(count%3){
                ans|=(1<<bits);
            }
       }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna