class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>mp;
        for(int i = 0 ; i<strs.size();i++){
            string sortedStr = strs[i];
            sort(sortedStr.begin() , sortedStr.end());

            mp[sortedStr].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto &entry :mp){
            result.push_back(entry.second);
        }
        return result;
    }
};