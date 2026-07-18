class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = nums[0];
        int mx = nums[0];
        for (int num : nums) {
            if (num < mn) mn = num;
            if (num > mx) mx = num;
        }
        while (mn != 0) {
            int temp = mn;
            mn = mx % mn;
            mx = temp;
        }
        
        return mx;
    }
};