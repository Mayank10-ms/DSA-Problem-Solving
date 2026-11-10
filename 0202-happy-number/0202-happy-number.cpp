class Solution {
public:
        int nextdig(int n){
        int sum = 0;
        while(n>0){
            int digit = n%10;
            sum+=digit*digit;
            n=n/10;
        }
          return sum;
        }
    bool isHappy(int n) {
        int slow = n;
        int fast = nextdig(n);

        while(fast != 1 and slow != fast){
            slow = nextdig(slow);
            fast = nextdig(nextdig(fast));
        }
        return fast == 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna