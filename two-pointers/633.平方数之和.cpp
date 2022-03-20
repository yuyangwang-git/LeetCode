/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */

// @lc code=start
class Solution {
public:
    bool judgeSquareSum(int c) {
        unsigned int i;
        unsigned int j;
        unsigned long int sum;

        i = 0;
        j = floor(sqrt(c));

        while (i <= j)
        {
            sum = i * i + j * j;                                               // pow() 的效率远低于直接相乘

            if (sum < c)
            {
                ++i;
            }
            else if (sum > c)
            {
                --j;
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

