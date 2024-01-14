class Solution {
public:
    bool isPalindrome(long x) {
        if(x<0){
            return false;
        }
      long original=x;
      long reversed=0;
      
      while(x>0){
      long dig=x % 10;
      reversed= reversed * 10 + dig;
      x/=10;
      
      }
      return original==reversed;
    }
    

};
