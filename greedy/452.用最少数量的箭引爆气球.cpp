/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气球
 */

// @lc code=start
class Solution {
public:
    static bool compare(const vector<int>& x, const vector<int>& y)
    {
        return (x[0] < y[0]);
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        int pre;
        int count;

        sort(points.begin(), points.end(), compare);
        pre = points[0][1];
        count = 1;
        for (int i = 1; i < points.size(); i++)
        {
            if (points[i][0] > pre)                                            // 不重叠
            {
                count++;
                pre = points[i][1];
            }
            else
            {
                pre = min(pre, points[i][1]);                                  // 取最小值以解决区间的包含关系
            }
        }
        
        //printf("%d", pre);
        return count;
    }
};
// @lc code=end

