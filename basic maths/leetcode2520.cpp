class Solution {
public:
    int countDigits(int num) {
        int ogNum= num;
        int cnt=0;
        while (num > 0){
            int rem = num%10;
            num=num/10;
            if((ogNum%rem) == 0){
                cnt++;
            }
        }
        return cnt;
    }
};