class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> freq;

        int n = nums.size();

        for(int i = 0; i < n; i++){
            
            auto it = freq.find(target - nums[i]);

            if(it != freq.end()) {
                int val = it->second;

                return {val, i};
            }

            freq[nums[i]] = i;
        }
        
    }
};
