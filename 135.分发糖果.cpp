/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 分发糖果
 */

// @lc code=start
class Solution {
public:
    int candy(vector<int>& ratings) {
        int sum = 0;
        vector<int> candy(ratings.size(), 1);

        for (int i = 0; i < ratings.size() - 1; i++)
        {
            if (ratings[i] < ratings[i+1])
            {
                candy[i+1] = candy[i] + 1;
            }
        }

        for (int i = ratings.size() - 1; i > 0; i--)
        {
            if (ratings[i] < ratings[i-1])
            {
                candy[i-1] = max(candy[i] + 1, candy[i-1]);
            }

            sum+=candy[i];
        }

        sum+=candy[0];

        printf("%d", sum);
        return sum;
    }
};
// @lc code=end

