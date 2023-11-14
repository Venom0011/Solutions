class Solution {
public:
    void solve(int o,int c,string output,vector<string>&ans){
        if(o==0 && c==0){
            ans.push_back(output);
            return;
        }
        
        if(o!=0){
            string op=output;
            op.push_back('(');
            solve(o-1,c,op,ans);
        }
        if(c>o){
            string op=output;
            op.push_back(')');
           solve(o,c-1,op,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(n,n,"",ans);
        return ans;
    }
};