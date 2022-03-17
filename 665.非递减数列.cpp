/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count;

        count = 0;
        for (int i = 1; i < nums.size() && count < 2; i++)
        {
            if (nums[i-1] > nums [i])
            {
                count++;
                if (i >= 2 && nums[i-2] > nums[i])
                {
                    nums[i] = nums[i-1];
                }
                else
                {
                    nums[i-1] = nums[i];
                }
            }
        }
        
        return (count<=1);
    }
};
// @lc code=end

