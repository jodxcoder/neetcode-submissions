class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> h;
       for(auto x : nums){
        if(h.find(x)!=h.end()) return x;
        else h.insert(x);
       }
       return -1;
        
    }
};
