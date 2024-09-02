class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if (strs.empty()) return ""; // Edge case: empty input vector

        for(int i=0;i<strs[0].size();i++){
            char ch = strs[0][i];
            bool match = true;

            for(int j=1;j<strs.size();j++){
                if(i >= strs[j].size() || ch != strs[j][i]){
                    match = false;
                    break;
                }
            }
                
            if (match) {
                ans.push_back(ch);
            } else {
                break; // Break out of the loop once a mismatch is found
            }
            

        }
        return ans;
    }
};
