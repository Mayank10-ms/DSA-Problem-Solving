class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx =0;
        int i =0;
        while(i<n){
            int curr_char = chars[i];
            int count = 0;
            while(i<n && chars[i]==curr_char){
                count++;
                i++;
            }
            chars[idx]=curr_char;
            idx++;
            if(count>1){
                string count_str = to_string(count);
                for(auto &ch : count_str){
                    chars[idx]=ch;
                    idx++;
                }
            }
        }
        return idx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna