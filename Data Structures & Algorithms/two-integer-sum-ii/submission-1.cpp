class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> tar;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                 if(numbers[j]+numbers[i]==target){
                    tar.push_back(i+1);
                    tar.push_back(j+1);
                    return tar;
                }

            }
        }
    
}
};