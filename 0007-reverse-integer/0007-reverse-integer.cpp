class Solution {
public:
    int reverse(int x) {
        long  sum=0;
        while(x!=0){
            int a=x%10;
            sum=sum*10+a;
            x=x/10;
             if(sum<INT_MIN||sum>INT_MAX){
            return 0;
           }
        }
        return sum;
    }
};