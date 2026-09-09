class Solution {
public:

    bool isPrime(int n) {
        if (n < 2) return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    bool isPalindrome(int n) {
        int original = n;
        int rev = 0;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }

        return original == rev;
    }

    int primePalindrome(int n) {
        if (n <= 11) {
            for (int i = n; i <= 11; i++) {
                if (isPrime(i) && isPalindrome(i))
                    return i;
            }
        }
        for (int i = 10; ; i++) {

            int p = i;
            int x = i / 10;

            while (x > 0) {
                p = p * 10 + x % 10;
                x /= 10;
            }

            if (p >= n && isPrime(p))
                return p;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna