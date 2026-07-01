class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int mpro=0;
        for(int i:prices){
            if(mini>i){
                mini=i;
            }
            else{
            mpro=max(mpro,i-mini);
            }
        }
        return mpro;
    }
};