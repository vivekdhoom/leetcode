class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;  // Ugly numbers must be positive
        
        int primes[3] = {2, 3, 5};
        for (int p : primes) {
            while (n % p == 0) {
                n /= p;
            }
        }
        return n == 1;
    }
};
