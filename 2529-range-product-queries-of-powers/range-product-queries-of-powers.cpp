class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;
        vector<long long> powers;

        // Extract powers of two from n (set bits)
        for (int bit = 0; bit < 31; ++bit) {
            if (n & (1 << bit)) {
                powers.push_back(1LL << bit);
            }
        }

        vector<int> ans;
        for (auto& q : queries) {
            long long prod = 1;
            for (int i = q[0]; i <= q[1]; ++i) {
                prod = (prod * powers[i]) % MOD;
            }
            ans.push_back((int)prod);
        }
        return ans;
    }
};