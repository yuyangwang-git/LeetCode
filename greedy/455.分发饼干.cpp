/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& children, vector<int>& cookies) {
        sort(children.begin(), children.end());
        sort(cookies.begin(), cookies.end());

        int i, j;

        for (i = 0, j = 0; i < children.size() && j < cookies.size(); i++, j++)
        {     
            while (children[i] > cookies[j])
            {
                j++;
                if (j == cookies.size())
                {
                    i--;
                    break;
                }
            }
        }

        printf("%d", i);
        return i;
    }
};
// @lc code=end

