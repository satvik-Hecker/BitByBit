
class Solution {
public:
    int reverse(int x) {
        int ogX = x;
        
        int res = 0;
        while (x){
            if (res>INT_MAX/10 || res<INT_MIN/10) return 0;
            int rem = x%10;
            res = res * 10 + rem;
            x=x/10;
        }

        return res;
    }
};