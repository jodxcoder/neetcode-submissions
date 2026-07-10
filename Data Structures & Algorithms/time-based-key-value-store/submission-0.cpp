class TimeMap {
    unordered_map<string,vector<pair<string,int>>> h;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        h[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        if(h.find(key)!=h.end()){
            int cnt=INT_MIN;
            for(auto x : h[key]){
                if(x.second<=timestamp) cnt=max(cnt,x.second);
                
                
                if(x.second==timestamp) return x.first;
            }

                for(auto x : h[key]){
                    if(x.second==cnt) return x.first;
                }
            }

            return "";
        }
    
};
