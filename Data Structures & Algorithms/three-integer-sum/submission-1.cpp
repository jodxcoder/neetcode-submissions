class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> arr_final;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int target = -nums[i];
            unordered_set<int> h;

            for(int j = i+1; j < nums.size(); j++) {
                int need = target - nums[j];

                if(h.find(need) != h.end()) {
                    arr_final.push_back({nums[i], nums[j], need});

                    while(j+1 < nums.size() && nums[j] == nums[j+1]) j++;
                }

                h.insert(nums[j]);
            }
        }
        return arr_final;
    }
};
