class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans;
        for(int i=0;i<n;i++){
            ans= __gcd(nums[0],nums[n-1]);
        }
        return ans;
    }
};