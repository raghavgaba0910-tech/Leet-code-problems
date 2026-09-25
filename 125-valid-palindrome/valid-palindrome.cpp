class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for(char c : s){
            if(isalnum(c)){
                clean += tolower(c);
            }
        }
        int a=0 , b=clean.size() - 1 ;
        while(a<b){
            if(clean[a] != clean[b]){
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};