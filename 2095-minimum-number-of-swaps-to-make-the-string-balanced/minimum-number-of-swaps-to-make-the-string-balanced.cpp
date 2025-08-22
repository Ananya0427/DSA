class Solution {
public:
    int minSwaps(string s) {
        int n=s.length();
        if(n%2) return -1;
        int open=0,close=0;
        for(int i=0;i<n;i++){
            if(s[i]=='[') open++;
            else{
                if(open>0) open--;
                else close++;
            }
        }
        int ans = (open + 1) / 2;
        return ans;
        
    }
};