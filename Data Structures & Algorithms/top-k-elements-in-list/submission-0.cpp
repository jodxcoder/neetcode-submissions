class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;  //element-- freq
        }

        vector<pair<int,int>> v;
        for(auto x:freq){
            v.push_back({x.second,x.first});  //freq--vector
        }

        sort(v.begin(),v.end());

        vector<int> arr;
        int n=v.size()-1;
        for(int i=0;i<k;i++){
            arr.push_back(v[n].second);
            n--;
        }

        return arr;

    }
};
