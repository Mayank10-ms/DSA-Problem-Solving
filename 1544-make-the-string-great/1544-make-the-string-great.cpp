class Solution {
public:
    string makeGood(string s) {
       string result;
       for(char &ch : s){
        if( !result.empty() && (result.back()+32 == ch || result.back()-32 == ch)){
            result.pop_back();
        }
        else{
            result.push_back(ch);
        }
       } 
       return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna