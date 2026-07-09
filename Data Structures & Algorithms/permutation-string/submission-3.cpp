class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if (s1.length() > s2.length()) return false;
        int len = s1.length();

        unordered_map<char,int> h;
        for(auto x : s1){
            h[x]++;
        }

        int i=0,j=len-1;
        unordered_map<char,int> h2;
        for(int k=0;k<=j;k++){
            h2[s2[k]]++;
        }        
        if(h==h2) return true;

        while(j<s2.size()){
            h2[s2[i]]--;
            if(h2[s2[i]]==0)  h2.erase(s2[i]);
            i++;
            j++;
            h2[s2[j]]++;
            if(h==h2) return true;
        }

        return false;
    }
};
