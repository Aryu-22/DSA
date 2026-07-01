class Solution {
public:
    int countDigits(int num) {
        string nums=to_string(num);
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int val=nums[i]-'0';
            if(num%val==0) cnt++;
        }
        return cnt;
    }
};