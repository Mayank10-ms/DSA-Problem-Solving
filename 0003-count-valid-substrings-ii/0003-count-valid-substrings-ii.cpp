class Solution {
public:
    long long countValidSubstrings(string s) {
        long long count = 0;
        int last_a = -1;
        int max_ab_start = -1;
        int invalid_start = -1;

        for(int i =0;i<s.size();i++){
            if(s[i]=='a'){
                last_a=i;
            }
            else if(s[i]=='b'){
                max_ab_start=max(max_ab_start,last_a);
            }
            else if(s[i]=='c'){
                invalid_start=max(invalid_start,max_ab_start);
              }
             count+=(i-invalid_start);
          }
        
     return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna