/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i;
        int j;
        int sum;

        i = 0;
        j = numbers.size() - 1;
        while (i < j)
        {
            sum = numbers[i] + numbers[j];
            if (sum < target)
            {
                i++;
            }
            else if (sum > target)
            {
                j--;
            }
            else
            {
                break;
            }
        }

        return vector<int> {i + 1, j + 1};
    }
};
// @lc code=end

