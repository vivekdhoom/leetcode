class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (but not 0 itself) can't be palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // For even length numbers, reversedHalf == x
        // For odd length numbers, we can ignore the middle digit (reversedHalf / 10)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};