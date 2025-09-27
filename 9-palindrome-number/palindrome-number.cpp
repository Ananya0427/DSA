class Solution {
public:
    bool isPalindrome(int x) {
        long revNum=0;
        int temp=x;
        while(x>0){
            int lastDigit=x%10;
            x=x/10;
            revNum=revNum*10+lastDigit;
        }
        return (revNum==temp);
    }
};