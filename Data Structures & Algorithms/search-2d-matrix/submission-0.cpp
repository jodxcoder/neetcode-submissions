class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto x:matrix){
            for(auto k:x){
                if(k==target){
                    return true;
                }
            }
        }
        return false;
    }
};
