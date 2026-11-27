class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> prev;

        int n = nums.size();


        for(int i = 0; i < n; i++){

            int needfind = target - nums[i];

            auto it = prev.find(needfind);

            if(it != prev.end()){
                int val = it->second;

                return{val , i};
            }

            prev[nums[i]] = i;

        } 
    }
};
