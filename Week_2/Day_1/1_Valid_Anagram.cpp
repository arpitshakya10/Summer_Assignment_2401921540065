class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        if(s.size()!=t.size()){
            return false;
        }
        for(char c: s){
            m[c]++;
        }
        for(char c: t){
            m[c]--;
            if(m[c]==0){
                m.erase(c);
            }
        }
        return m.empty();
    }
};
