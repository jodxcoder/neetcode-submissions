class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto x:tokens){
            if(x!="+" && x!="/" && x!="-" && x!="*"){
                s.push(stoi(x));
            }
            else{
                int res=0;
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                if(x=="+"){
                    res=a+b;
                    s.push(res);
                }
                else if(x=="-"){
                    res=a-b;
                    s.push(res);
                }
                else if(x=="/"){
                    res=a/b;
                    s.push(res);
                }
                else{
                    res=a*b;
                    s.push(res);
                }
            }
        }
        return s.top();
    }
};