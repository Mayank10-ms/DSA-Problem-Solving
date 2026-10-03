class Solution {
public:
    string process(string s){
        string st;
        for(auto c : s){
            if(c!='#'){
                st.push_back(c);
            }
            else if(!st.empty()){
                st.pop_back();
            }
         }
            return st;
        }
    
    bool backspaceCompare(string s, string t) {
        if(process(s)==process(t)){
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna