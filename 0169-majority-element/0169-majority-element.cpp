class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int neww=0;
        int count=0;
        for(int num:nums){
            if(count==0){
                neww=num;
            }
            if(num==neww){
                count++;
            }
            else{
                count--;
            }
        }
        return neww;
    }
};