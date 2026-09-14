class Solution {
public:
    int power(int a, int b){
        long long ans = 1;
        while(b--){
            ans = (ans * a)%1337;
        }
        return ans;
    }
    int superPow(int a, vector<int>& b) {
        long long ans = 1;
        for(int digit : b){
            ans = power(ans,10);
            ans = (ans * power(a,digit))%1337;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna