class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> m(nums.begin(),nums.end());
        int maxi=0;
        for(int n:m){
            if(m.find(n-1)==m.end()){
                int curr=n;
                int len=1;
                while(m.find(curr+1)!=m.end()){
                    curr++;
                    len++;
                }
                maxi=max(maxi,len);
            }
        }
        return maxi;
    }
};