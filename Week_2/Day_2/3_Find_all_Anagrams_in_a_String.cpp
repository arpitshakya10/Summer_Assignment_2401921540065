class Solution {
public:
    vector<int> findAnagrams(string s,string p) {
        vector<int> ans
        int k=p.size();
        if(k>s.size()) return ans;
        vector<int> pCnt(26,0);
        vector<int> winCnt(26,0);
        for(char ch:p){
            pCnt[ch-'a']++;
        }
        for(int i=0;i<s.size();i++){
            char curr=s[i];
            winCnt[curr-'a']++;
            if(i>=k){
                char left=s[i-k];
                winCnt[left-'a']--;
            }
            if(winCnt==pCnt){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};
