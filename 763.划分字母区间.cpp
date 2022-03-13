/*
 * @lc app=leetcode.cn id=763 lang=cpp
 *
 * [763] 划分字母区间
 */

// @lc code=start
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int count = 0;
        vector<int> result;
        set<char> workspace;                                                   // 或者用 map 来实现
        char freq[26] = {0};

        for (auto i : s)
        {
            freq[i - 'a']++;                                                   // 统计字符频率
        }
        
        for (auto i : s)
        {
            count++;
            freq[i - 'a']--;
            workspace.insert(i);
            
            if (freq[i - 'a'] == 0)
            {
                workspace.erase(i);
                if (workspace.empty())
                {
                    result.push_back(count);
                    count = 0;
                }
            }
        }

        return result;
    }
};
// @lc code=end

