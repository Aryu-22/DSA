class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> h(256, -1);
        int l=0,r=0;
        int len=0,maxlen=0;
        int n=s.size();
        while(r<n){
            if(h[s[r]]!=-1){
                if(h[s[r]]>=l){
                    l=h[s[r]]+1;
                }
            }
            maxlen=r-l+1;
            len=max(len,maxlen);
            h[s[r]]=r;
            r++;
        }
        return len;
    }
};