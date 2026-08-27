class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        for(int i =1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
            res+=prices[i]-prices[i-1];
        }
    }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna