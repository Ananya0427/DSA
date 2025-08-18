class Solution {
public:
    int minBitFlips(int start, int goal) {
        unsigned n=start^goal;
        int cnt=0;
        while(n>1){
            cnt +=n&1;
            n=n>>1;
        }
        if(n==1) cnt+=1;
        return cnt;
    }
};