class Solution {
public:
    string interpret(string s) {
        string ans;int i=0;
        while(i<s.length()){
            if(s[i]=='(' && s[i+1]==')'){
                ans.push_back('o');
                i+=2;
            }else if((s[i]=='(' && s[i+1]!=')') || s[i]==')'){
                i++;
            }else{
                ans.push_back(s[i]);
                i++;
            }
            
        }
        return ans;
    }
};