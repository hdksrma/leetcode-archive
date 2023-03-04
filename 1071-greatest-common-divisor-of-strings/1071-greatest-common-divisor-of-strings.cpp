class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        string x ="";

        if(str1+str2 == str2+str1){
            for(int i=0; i<gcd( str1.size(), str2.size() ); i++){
                x = x + str1[i];
            }
        }  
        return x;
    }
};