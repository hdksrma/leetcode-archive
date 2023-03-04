class Solution {
public:
    bool isPalindrome(int x) {
        long long int Y = 0;
        int dummy = x;
        while(dummy>0){
            int digit = dummy%10;
            Y = Y*10 + digit;
            dummy = dummy/10;
        }
        
        if(Y==x){return true;}
        else return false;
    }
};