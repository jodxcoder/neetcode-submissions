class Solution {
public:
    int findMin(vector<int> &nums) {
        int min_el=nums[0];
        for(auto x:nums){
            min_el=min(min_el,x);
        }
        return min_el;
        
    }
};  
