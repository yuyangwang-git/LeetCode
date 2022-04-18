/*
 * @lc app=leetcode.cn id=81 lang=cpp
 *
 * [81] 搜索旋转排序数组 II
 */

// @lc code=start
class Solution {
public:
    int get_rotation_num(vector<int>& nums, int k, int index) {
        if (index < k)
        {
            return nums[nums.size() - k + index];
        }
        else
        {
            return nums[index - k];
        }
    }

    bool search(vector<int>& nums, int target) {
        int k;

        k = 0;
        for (int i = 0; i < nums.size() - 1; i++)          // 找出旋转核 k
        {
            if (nums[i] > nums [i + 1])
            {
                k = nums.size() - i - 1;
                break;
            }    
        }

        int left;
        int mid;
        int right;

        left = 0;
        right = nums.size();

        while (left < right)                               // 二分查找, 映射区间
        {
            mid = left + (right - left) / 2;

            if (target > get_rotation_num(nums, k, mid))             // [left, mid), mid, [mid + 1, right)
            {
                left = mid + 1;
            }
            else if (target < get_rotation_num(nums, k, mid))
            {
                right = mid;
            }
            else
            {
                return true;
            }
        }
        
        return false;
    }
};
// @lc code=end

