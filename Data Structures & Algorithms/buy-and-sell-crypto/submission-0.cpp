class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                    diff=max(diff,prices[j]-prices[i]);
            }
        }
        return diff;
    }
};
