class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        int strslen=strs.size();
        string temp;
        vector<string> vec;
        for(int i=0;i<strslen;i++)
        {
            temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto it:mp)
        {
            res.push_back(it.second);
        }
        return res;
    }
};