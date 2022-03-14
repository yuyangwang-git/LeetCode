/*
 * @lc app=leetcode.cn id=406 lang=cpp
 *
 * [406] 根据身高重建队列
 */

// @lc code=start
class Solution {
public:
    static bool compare(const vector<int>& a, const vector<int>& b)
    {
        if (a[0] == b[0])
        {
            return (a[1] > b[1]);
        }
        else
        {   
            return (a[0] < b[0]);
        }
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> queue(people.size());
        sort(people.begin(), people.end(), compare);                           // ki相同的元素, 最终结果中必定按hi升序排列

        for (int i = 0; i < people.size(); i++)
        {
            if (queue[people[i][1]][0] == -1)
            {
                queue[people[i][1]] = people[i];
            }
            
        }
        
        return queue;
    }
};
// @lc code=end

