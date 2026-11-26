class Solution {
   public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen;

        int n = s.size();
        int m = t.size();

        if(n != m){
            return false;
        }

        for (int i = 0; i < n; i++) {
            seen[s[i]]++;
        }

        for (int i = 0; i < m; i++) {
            seen[t[i]]--;

            if(seen[t[i]] < 0) {
                return false;
            }
        }

        return true;
    }
};
