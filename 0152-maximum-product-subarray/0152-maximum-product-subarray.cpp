class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];   // fix out-of-bounds

        int maxx = nums[0];

        // check every subarray starting at i
        for (int i = 0; i < n; i++) {
            int curr = 1;
            for (int j = i; j < n; j++) {
                curr *= nums[j];              // product of subarray nums[i..j]
                maxx = max(maxx, curr);       // update maximum
            }
        }

        return maxx;
    }
};
