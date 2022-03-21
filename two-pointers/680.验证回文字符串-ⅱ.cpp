/*
 * @lc app=leetcode.cn id=680 lang=cpp
 *
 * [680] 验证回文字符串 Ⅱ
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(const string & s, int begin, int end) {
        while (begin < end)
        {
            if (s[begin] == s[end])
            {
                ++begin;
                --end;
                continue;
            }
            else
            {
                return false;
            }
        }

        return true;
    }

    bool validPalindrome(string s) {
        unsigned int i;
        unsigned int j;
        bool flag;

        i = 0;
        j = s.length() - 1;
        flag = false;

        while (i < j)
        {
            if (s[i] == s[j])
            {
                ++i;
                --j;
                continue;
            }
            else if (s[i + 1] == s[j] || s[i] == s[j - 1])
            {
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j -1);
            }
            else
            {
                return false;
            }

            if (flag)
            {
                return false;
            }
            flag = true;
        }

        return true;
    }
};
// @lc code=end

