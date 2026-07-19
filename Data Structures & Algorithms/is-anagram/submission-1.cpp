class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ans;
        if(s.size()!=t.size()) return false;
        for(int i=0; i<s.size();i++){
            ans[s[i]]++;
        }
        for(int j=0; j<t.size();j++){
            ans[t[j]]--;
        }
        for(auto const&[key,value]:ans){
            if(value>0){
                return false;
            }
        }
        return true;
    }
};
