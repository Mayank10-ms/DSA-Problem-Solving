class Solution {
public:
    int minRange(int a, int b, int c) {
        int x = min({a,b,c});
        int y = max({a,b,c});
        int z = a+b+c-x-y;

        return min(y-x,z);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna