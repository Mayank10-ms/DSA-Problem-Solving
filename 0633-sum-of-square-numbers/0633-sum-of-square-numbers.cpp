class Solution {
public:
    bool judgeSquareSum(int c) {
    // for(long long a=0;a*a<=c;a++){
    //     for(long long b=0;b*b<=c;b++){
    //         if(a*a+b*b==c){
    //             return true;
    //         }
    //     }
    // }
    // return false;

    long long left = 0;
    long long right = sqrt(c);
    while(left<=right){
        long long sum = left*left+right*right;
        if(sum==c){
            return true;
        }
        else if(sum<c){
            left++;
        }
        else{
            right--;
        }
    }
    return false;
  }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna