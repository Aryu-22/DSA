class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int curr=nums[0];
        int mini=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=curr;
            curr=max({nums[i],temp*nums[i],mini*nums[i]});
            mini=min({nums[i],temp*nums[i],mini*nums[i]});
            ans=max(ans,curr);
        }
        return ans;
    }
};