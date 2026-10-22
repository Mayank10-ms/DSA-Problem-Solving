
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), zero = 0;

        for (int i = 0; i < n; i++)
            if (nums[i] == 0) zero = i;

        auto check = [&](int step) {
            for (int i = 1; i < n; i++) {
                int a = (zero + (i - 1) * step + n) % n;
                int b = (zero + i * step + n) % n;
                if (nums[a] > nums[b]) return false;
            }
            return true;
        };

        int ans = INT_MAX;

        if (check(1))
            ans = min({ans, zero, n - zero + 2});

        if (check(-1))
            ans = min({ans, zero + 2, n - zero});

        return ans == INT_MAX ? -1 : ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna