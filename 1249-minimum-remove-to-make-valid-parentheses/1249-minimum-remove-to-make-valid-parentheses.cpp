class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(s[i]==')' and !st.empty()){
                    st.pop();
                }
               else{
                s[i]='#';
               } 
            }
        }
        while(!st.empty()){
          s[st.top()] = '#';
          st.pop();
        }
        string ans;
        for(auto c : s){
            if(c!='#'){
                ans+=c;
            }
        }

        return ans;;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna