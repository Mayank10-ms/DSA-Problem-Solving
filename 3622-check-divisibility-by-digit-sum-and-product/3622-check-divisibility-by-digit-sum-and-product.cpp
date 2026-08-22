class Solution {
public:
    bool checkDivisibility(int n) {
        int dup = n;
        int sum =0;
        int product = 1;
        while(n!=0){
            int digit=n%10;
            sum=sum+digit;
            product = product*digit;
         n=n/10;
        }
       if(dup%(sum+product)==0){
        return true;
       }
       else{
       return false;
       }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna