class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans=1;
        if(num==1) return false;
        for (int i=2;i*i<=num;i++){
            if(num % i ==0){
                ans+=i;
                if(i!=num/i) ans+=(num/i);
            }
        }
        return (ans == num);
    }
};