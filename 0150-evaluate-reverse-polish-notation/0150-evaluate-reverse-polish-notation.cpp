class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int result = 0;
        for(auto n : tokens){
         if(isdigit(n[0]) || (n.size() > 1 && n[0] == '-')) {
                  st.push(stoi(n));
         }
         else{
           int n1 = st.top();
           st.pop();
           int n2 = st.top();
           st.pop();
            if(n=="+"){
              result =n2+n1;
            }
            else if(n=="-"){
                result=n2-n1;
            }
            else if(n=="*"){
                result=n2*n1;
            }
            else if(n=="/"){
                result=n2/n1;
            }
            st.push(result);
         }
      }
        return st.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna