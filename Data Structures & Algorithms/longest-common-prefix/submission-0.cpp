class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            string curr = strs[i];
            int j = 0;

            while (j < prefix.size() && j < curr.size() && prefix[j] == strs[i][j]){
                j++;
            }

            prefix.resize(j);
        }
        
        return prefix;
    }
};