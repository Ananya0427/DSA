class Solution {
private:
    int findMax(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int>& nums, int hourly) {
        long long totalH = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            totalH += ceil((double) nums[i] / (double) hourly);
        }
        return totalH;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);

        while (low <= high) {
            int mid = (low + high) / 2;
            long long totalH = calculateTotalHours(piles, mid);
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};