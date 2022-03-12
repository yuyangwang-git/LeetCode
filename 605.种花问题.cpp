/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count;
        int maxFlower;
        vector<int> bed = {1, 0};
        bed.insert(bed.end(), flowerbed.begin(), flowerbed.end());
        bed.push_back(0);
        bed.push_back(1);                                                 // 避免判断边界条件

        count = 0;
        maxFlower = 0;
        for (int i = 0; i < bed.size(); i++)
        {
            if (bed[i] == 1)
            {
                if (count)
                {
                    maxFlower += ceil(count/2.0) - 1;
                }
                count = 0;
            }
            else
            {
                count++;
            }
        }

        printf("%d", maxFlower);
        return (maxFlower >= n);
    }
};
// @lc code=end

