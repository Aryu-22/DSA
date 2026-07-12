class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> ans;
        vector<int> rank=arr;
        sort(rank.begin(),rank.end());
        int cnt=1;
        for(int i:rank){
            if(ans.find(i)==ans.end()){
                ans[i]=cnt++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=ans[arr[i]];
        }
        return arr;
    }
};