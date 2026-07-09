class Solution {
public:
    bool isValid(string s) {
         if(s.size()==1){
            return false;
         }
           stack<char> s1;
           for(char x:s){
            if(x=='(' || x== '[' || x=='{'){
                s1.push(x);
            }
            else if(x==')' || x== ']' || x=='}'){
                if(s1.empty()){
                    return false;
                }
                char top=s1.top();
                s1.pop();
                if(top=='(' && x!=')' || top=='{' && x!='}' || 
                top=='[' && x!=']'){
                    return false;
                }
            }
            else{
                return false;
            }
           }
           return s1.empty();
    }
};
