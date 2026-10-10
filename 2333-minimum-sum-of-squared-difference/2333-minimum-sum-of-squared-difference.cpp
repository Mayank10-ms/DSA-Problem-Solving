class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2,
                               int k1, int k2) {
        int n = nums1.size();
        vector<int> diff(n);
        long long k = (long long)k1 + k2;
        long long total = 0;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            total += diff[i];
            mx = max(mx, diff[i]);
        }

        if (total <= k) return 0;

        int low = 0, high = mx;

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long ops = 0;

            for (int d : diff) {
                if (d > mid)
                    ops += d - mid;
            }

            if (ops <= k)
                high = mid;
            else
                low = mid + 1;
        }

        int limit = low;
        long long ops = 0;
        long long ans = 0;

        for (int d : diff) {
            if (d > limit)
                ops += d - limit;

            long long x = min(d, limit);
            ans += x * x;
        }

        long long remaining = k - ops;

        for (int d : diff) {
            if (remaining == 0) break;

            if (d >= limit) {
                ans -= 1LL * limit * limit
                     - 1LL * (limit - 1) * (limit - 1);
                remaining--;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna