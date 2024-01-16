class Solution {
public:
    int subtractProductAndSum(int n) {
        int count=0;
        int counts=1;
        int sub;
        while(n>0){
            int rem=n%10;
            count+=rem;
            counts*=rem;
            n/=10;

        }
        
     sub=counts-count;
        
        return sub;

        
    }
};
