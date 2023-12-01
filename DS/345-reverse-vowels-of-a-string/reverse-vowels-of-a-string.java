class Solution {
    public static boolean isVowel(char s){
        s=Character.toLowerCase(s);
        if(s=='a' ||  s=='e'|| s=='i'|| s=='o'|| s=='u') return true;
        return false;
    }
    public String reverseVowels(String s) {
        char str[]=s.toCharArray();
        int i=0;
        int j=s.length()-1;
        String ans="";
        while(i<j){
            if(isVowel(str[i]) && isVowel(str[j]))
                {
                char a=str[i];
                str[i]=str[j];
                str[j]=a;
                i++;
                j--;
            }
            else if(!isVowel(str[i])){
                i++;
            }else{
                   j--; 
            }  
                
            }
        return String.valueOf(str);
        
    }
}