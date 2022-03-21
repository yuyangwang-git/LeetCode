/*
 * @lc app=leetcode.cn id=524 lang=cpp
 *
 * [524] 通过删除字母匹配到字典里最长单词
 */

// @lc code=start
class Solution {
public:
    static bool compare(const string& x, const string& y){
        if (x.length() != y.length())
        {
            return (x.length() > y.length());
        }
        else
        {
            return (x < y);
        }
    }

    string findLongestWord(string s, vector<string>& dictionary) {
        int i;
        int j;
        vector<string> dict_exist;

        for (auto word : dictionary)                                           // 判断是否构成 "字串", 若构成则保存
        {
            i = 0;
            j = 0;
            while (i < s.length() && j < word.length())
            {
                if (s[i] == word[j])
                {
                    ++j;
                }
                
                ++i;
            }

            if (j == word.length())
            {
                dict_exist.push_back(word);
            }
        }

        if (dict_exist.empty())
        {
            return "";
        }
        else
        {
            sort(dict_exist.begin(), dict_exist.end(), compare);
            return dict_exist[0];
        }

    }
};
// @lc code=end

