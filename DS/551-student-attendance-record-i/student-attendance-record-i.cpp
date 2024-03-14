class Solution {
public:
    bool checkRecord(string s) {
        int ab=0,lt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                ab++;
                if(ab>=2) return false;
            }

            if(s[i]=='L'){
                lt++;

                if(lt>=3) return false;
            }else{
                lt=0;
            }
        }

        return true;
    }
};