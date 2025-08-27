class Solution {
public:
    bool isPalindrome(int x) {
        int x1=x;
        long res = 0 ;
        if(x<0) return false;
        while (x){
            int rem = x%10;
            res= res*10 + rem;
            x/=10;
        }
        
        return (x1==res);
    }
};