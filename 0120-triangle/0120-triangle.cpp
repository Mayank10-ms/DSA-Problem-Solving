class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
         int n = triangle.size();

        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                triangle[i][j] += min(triangle[i + 1][j],
                                      triangle[i + 1][j + 1]);
            }
        }

        return triangle[0][0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna