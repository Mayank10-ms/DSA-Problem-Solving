class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r=image.size();
        int c=image[0].size();
        for(int i =0;i<r;i++){
            reverse(image[i].begin(),image[i].end());
            for(int j =0;j<c;j++){
            image[i][j]=image[i][j]^1;
        }
     }
        return image;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna