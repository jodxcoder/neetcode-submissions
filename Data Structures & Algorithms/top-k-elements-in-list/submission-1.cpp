class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> h;
        for(int i=0;i<nums.size();i++){
            h[nums[i]]++;
        }

        vector<pair<int,int>> p;
        for(auto x : h){
            p.push_back({x.second,x.first});
        }

        sort(p.begin(),p.end());

        vector<int> arr;
        int n=p.size()-1;
        for(int i=0;i<k;i++){
            arr.push_back(p[n].second);
            n--;
        }

        return arr;

        
    }
};
