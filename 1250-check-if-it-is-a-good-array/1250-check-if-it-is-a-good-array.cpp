class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            g = gcd(g, nums[i]);
        }

        return g == 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna