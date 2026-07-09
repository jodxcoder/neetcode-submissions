class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        int i=0;
        int n=temperatures.size();
        while(i<n-1){
            int c=temperatures[i];
            int count=1;
            int j=i+1;
            while(j<n && temperatures[j]<=c){
                j++;
                count++;
            }
            if(j==n){
                result.push_back(0);
            }
            else{
                result.push_back(count);
            }
            i++;
            count=1;
        }
        result.push_back(0);
        return result;

    }
};
