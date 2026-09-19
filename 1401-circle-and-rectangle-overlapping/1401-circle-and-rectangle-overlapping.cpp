class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int nearx = max(x1,min(x2,xCenter));
        int neary = max(y1,min(y2,yCenter));

        int ans1 = xCenter-nearx;
        int ans2 = yCenter-neary;

        return ans1*ans1 + ans2*ans2 <=radius*radius;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna