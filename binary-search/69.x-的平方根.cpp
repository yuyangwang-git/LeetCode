/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long result;

        result = x;
        while (result * result > x)
        {
            result = (result + x/result) / 2;
        }
        
        return result;
    }
};
// @lc code=end

