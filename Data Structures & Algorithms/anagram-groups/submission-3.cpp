class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     vector<vector<string>> arr2;

    //     vector<int> arr(strs.size(),0);
    //     for(int i=0;i<strs.size();i++){
    //         vector<string> s;
    //         if(arr[i]==1) continue;
    //         else{
    //             s.push_back(strs[i]);
    //             arr[i]=1;
    //         }
    //         for(int j=0;j<strs.size();j++){
    //             if(j==i) continue;
    //             if(arr[j]==1) continue;
    //             else{
    //                 string q=strs[j];
    //                 string l =strs[i];
    //                 sort(q.begin(),q.end());
    //                 sort(l.begin(),l.end());
    //                 if(l==q){
    //                     s.push_back(strs[j]);
    //                     arr[j]=1;
    //                 }
    //             }
    //         }
    //         arr2.push_back(s);
    //     }
    //     return arr2;
    // }
    vector<vector<string>> grp;
      unordered_map<string,vector<string>> h;
      if (strs.empty()) return {};
      string q=strs[0];
      sort(q.begin(),q.end());
      h[q].push_back(strs[0]);
      for(int i=1;i<strs.size();i++){
        bool found=true;
        string s = strs[i];
        sort(s.begin(),s.end());

        for(auto &x : h){
            if(x.first==s){
                found=false;
                x.second.push_back(strs[i]);
            }
        }
        if(found!=false){
            h[s].push_back(strs[i]);
        }

       


      }
      for(auto x : h){
        grp.push_back(x.second);
      }

      return grp;

    }
};
