class Solution {
public:
    bool isNumber(string s) {
        bool digit = false;
        bool dot = false;
        bool e = false;

        for(int i = 0; i < s.size(); i++) {
            char c = s[i];

            if(isdigit(c)) {
                digit = true;
            }
            else if(c == '.') {
                if(dot || e) return false;
                dot = true;
            }
            else if(c == 'e' || c == 'E') {
                if(e || !digit) return false;
                e = true;
                digit = false;
            }
            else if(c == '+' || c == '-') {
                if(i != 0 && s[i-1] != 'e' && s[i-1] != 'E')
                    return false;
            }
            else {
                return false;
            }
        }

        return digit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna