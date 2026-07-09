class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return nums.size();
        sort(nums.begin(),nums.end());
        int len=1;
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]+1){
                count++;
                len=max(len,count);
            }
            else if(nums[i+1]==nums[i]){
                continue;
            }
            else{
                count=1;
            }
        }
        return len;
        
    }
};
