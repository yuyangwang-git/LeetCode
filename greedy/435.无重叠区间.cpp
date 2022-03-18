/*
 * @lc app=leetcode.cn id=435 lang=cpp
 *
 * [435] 无重叠区间
 */

// @lc code=start
class Solution {
public:
    static bool compare(vector<int>& interval1, vector<int>& interval2)
    {
        return (interval1[1] < interval2[1]);
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count;
        int pre;

        sort(intervals.begin(), intervals.end(), compare);
        
        pre = intervals[0][1];
        count = 0;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] < pre)                                    // 如果重叠
            {
                count++;
            }
            else
            {
                pre = intervals[i][1];                                    // 指针向后移动
            }
        }

        printf("%d", count);
        return count;
    }
};
// @lc code=end

