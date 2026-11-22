class Solution {
public:
    bool checkString(string s) {
        int n = s.size();

        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(s[i]=='b' and s[j]=='a') return false;  
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna