//268. Missing Number
// https://leetcode.com/problems/missing-number/
// time complexity: O(n)
// space complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;

        int arrSum = 0;
        for(int x : nums) {
            arrSum += x;
        }

        return total - arrSum;
    }
};
