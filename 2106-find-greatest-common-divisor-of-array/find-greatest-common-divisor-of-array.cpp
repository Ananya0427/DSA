class Solution {
private:
    int GCD(int a, int b){
        return __gcd(a,b);
    }
public:
    int findGCD(vector<int>& nums) {
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        return GCD(min,max);
    }
};