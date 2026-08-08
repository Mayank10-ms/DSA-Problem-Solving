class Solution {
public:
    int maxVowels(string s, int k) {
        int left =0;
        int window = 0;
        int ans = INT_MIN;

        for(int right =0;right<s.size();right++){
           if (s[right] == 'a' || s[right] == 'e' || 
            s[right] == 'i' || s[right] == 'o' || 
            s[right] == 'u') {
            window++;
    }

            if(right-left+1==k){
                ans = max(ans,window);
               if (s[left] == 'a' || s[left] == 'e' || 
            s[left] == 'i' || s[left] == 'o' || 
            s[left] == 'u') {
            window--;
    }

                left++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna