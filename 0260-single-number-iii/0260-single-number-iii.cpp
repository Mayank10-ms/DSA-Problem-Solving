class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorAll = 0;

        for (int x : nums)
            xorAll ^= x;

        unsigned mask = static_cast<unsigned>(xorAll) &
                        -static_cast<unsigned>(xorAll);

        int a = 0, b = 0;

        for (int x : nums) {
            if (static_cast<unsigned>(x) & mask)
                a ^= x;
            else
                b ^= x;
        }

        return {a, b};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna