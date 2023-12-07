class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int n1=s.length();
        int n2=t.length();
        if(i==n1) return true;
        while(i<n2 && j<n1){
            if(s[j]==t[i]){
                j++;
            }
            i++;
        }
        return (n1==j);
    }
};