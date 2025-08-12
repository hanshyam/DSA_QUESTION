class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxElem = *max_element(nums.begin(), nums.end());
        int maxLength = 0, currentLength = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == maxElem) {
                currentLength++;
                maxLength = max(maxLength, currentLength);
            } else {
                currentLength = 0;
            }
        }
        return maxLength;
    }
};
