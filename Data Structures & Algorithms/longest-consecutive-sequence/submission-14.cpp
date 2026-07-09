class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==1) return 1;
        if (nums.empty()) return 0;
        
        unordered_map<int,int> h;
        for(auto x : nums){
            h[x]++;
        }
        vector<pair<int,int>>p;
        for(auto x : h){
            p.push_back(x);
        }

        sort(p.begin(),p.end());

        int len=1;
        int count=1;
        for(int i=0;i<p.size()-1;i++){
            if(p[i+1].first==(p[i].first)+1){
                count++;
                len=max(len,count); 
            }
            else{
                count=1;
            }

        }
        return len;
    }
};
