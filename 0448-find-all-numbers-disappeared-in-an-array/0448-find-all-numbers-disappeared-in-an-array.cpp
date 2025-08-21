class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans; 
        int expected = 1;

        for (int i = 0; i < n; i++) {
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i-1]) continue;

            while (expected < nums[i]) {
                ans.push_back(expected);
                expected++;
            }

            if (expected == nums[i]) expected++;
        }

        // Add remaining numbers after loop
        while (expected <= n) {
            ans.push_back(expected);
            expected++;
        }

        return ans;
    }
};
