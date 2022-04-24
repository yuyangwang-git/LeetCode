/*
 * @lc app=leetcode.cn id=540 lang=cpp
 *
 * [540] 有序数组中的单一元素
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left;
        int mid;
        int right;

        left = 0;
        right = nums.size() - 1;
        
        while (left < right)
        {
            mid = left + (right - left) / 2;

            if (mid % 2)
            {
                --mid;
            }
            
            if (nums[mid] == nums[mid + 1])
            {
                left = mid + 2;
            }
            else
            {
                right = mid;
            } 
        }

        return nums[left];
    }
};
// @lc code=end

