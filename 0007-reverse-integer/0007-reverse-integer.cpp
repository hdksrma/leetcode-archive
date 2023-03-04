class Solution {
  public: int reverse(int x) {

    long long int y = 0;
    long long int dummy = x;
    
    while (dummy != 0) {
        y = (10 * y) + (dummy % 10);
        dummy = dummy / 10;
      }
      
    if( y<INT_MIN || y>INT_MAX){
          return 0;
      }

    else return y;
    }
  
};