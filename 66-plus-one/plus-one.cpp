class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        while(i>=0){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            //else we get 9
            digits[i]=0;
            i--;
        }
        digits.insert(begin(digits),1);//1 is carry forwarded till the end
        return digits;
    }
};