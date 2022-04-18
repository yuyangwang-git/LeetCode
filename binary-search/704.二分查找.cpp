/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left;
        int mid;
        int right;

        left = 0;
        right = nums.size();

        while (left < right)
        {
            mid = left + (right - left) / 2;

            if (nums[mid] < target)                        // [left, mid) [mid, right)
            {
                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid;
            }
            else
            {
                return mid;
            }   
        }

        return -1;
    }
};
// @lc code=end

