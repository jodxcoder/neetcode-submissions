class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> s;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]++;
        }
        int count=0;
        for(auto x : s){
            if(x.second==1){
                return x.first;
            }
        }
        
    }
};
