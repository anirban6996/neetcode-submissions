class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> seen;

        int n = nums.size();


        for(int i = 0; i < n; i++){
            
            if(seen.count(nums[i])){
                return true;
            }

            seen[nums[i]] = i;
        }

        return false;
    }
};