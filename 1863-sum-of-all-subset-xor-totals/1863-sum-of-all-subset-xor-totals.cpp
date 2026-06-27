class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
         int OR = 0;

        for (int x : nums)
            OR |= x;

        return OR * (1 << (nums.size() - 1));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna