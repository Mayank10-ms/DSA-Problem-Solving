class Solution {
public:
    long long countValidSubstrings(string s) {
        long long count = 0;
        int last_abc = -1;
        for(int i = 0;i<s.size();i++){
            if(i>=2 and s[i-2]=='a' and s[i-1]=='b' and s[i]=='c'){
                last_abc = i-2;
            }   
            count+=(i-last_abc);
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna