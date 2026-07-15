class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int sum=0;
        int sign=1;
        for(char c:s){
            sum=sum+sign*(c-'0');
            sign*=-1;
        }
        return sum;
    }
};