class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ana;
        for(string s:strs){
            string st=s;
            sort(st.begin(),st.end());
            ana[st].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& r:ana){
            res.push_back(r.second);
        }
        return res;
    }
};