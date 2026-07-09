class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        while(i<matrix.size()){
            int low=0,high=matrix[0].size()-1;
            if(matrix[i][low]==target || matrix[i][high]==target) return true;
          
            else if(matrix[i][high]>target){
                while(low<=high){
                    int mid = low + (high-low)/2;
                    if(matrix[i][mid]==target) return true;
                    else if(matrix[i][mid]<target){
                        low=mid+1;
                    }
                    else high=mid-1;
                }
            }
            i++;
        }
        return false;
    }
};
