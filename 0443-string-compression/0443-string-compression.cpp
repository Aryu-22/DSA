class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansidx=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ansidx++]=chars[i];
            int count=j-i;
            if(count>1){
                string cnt= to_string(count);
                for(char ch:cnt){
                    chars[ansidx++]=ch;
                }
            }
            i=j;
        }
        return ansidx;
    }
};