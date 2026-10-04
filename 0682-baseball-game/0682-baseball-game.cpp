class Solution {
public:
    int calPoints(vector<string>& operations) {
      stack<int>st;
        for(auto ch : operations){
          
            if(ch == "C"){
                st.pop();
            }
            else if(ch == "D"){
               st.push(st.top() * 2);

            }
            else if(ch == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
            else{
                st.push(stoi(ch));
            }
        }
        int total = 0;
        while(!st.empty()) {
            total += st.top();
            st.pop();
        }
         return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna