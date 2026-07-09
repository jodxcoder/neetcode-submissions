class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int max_el;
        for(int i=0;i<k;i++){
            max_el=nums[0];
            for(int i=0;i<nums.size();i++){
                max_el=max(max_el,nums[i]);
            }
            int j;
             for(int i=0;i<nums.size();i++){
                if(nums[i]==max_el){
                    j=i;
                }
            }
            nums.erase(nums.begin()+j);
        }
        return max_el;
    }
};
