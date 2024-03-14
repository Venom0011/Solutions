class Solution {
public:
    bool checkRecord(string s) {
        int ab=0,lt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                ab++;
            }else if(i+1<s.length() && i+2<s.length() && s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
               return false;
            }
        }

        return (ab<2 && lt<3);
    }
};