class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; a++) {
            
            long target = c - (a * a);
            long left = a; 
            long right = sqrt(c);
            
            while (left <= right) {
                long mid = left + (right - left) / 2;
                long ans = mid * mid;
                
                if (ans == target) {
                    return true;
                } 
                else if (ans < target) {
                    left = mid + 1;
                } 
                else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};