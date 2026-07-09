class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<bool> h(strs.size(),false);
       
        vector<vector<string>> res;
        vector<string> res2;
        for(int i=0;i<strs.size();i++){
            if(h[i]==false){
                res2.push_back(strs[i]);
                h[i]=true;
                for(int j=i+1;j<strs.size();j++){
                    string a = strs[i];
                    string b = strs[j];
                    sort(a.begin(), a.end());
                    sort(b.begin(), b.end());
                    if (a == b)
                    {
                        res2.push_back(strs[j]);
                        h[j]=true;
                    }
                }
                res.push_back(res2);
                    res2.clear();

            }

        }
        return res;
    }
};
