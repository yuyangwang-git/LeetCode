/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i;

        i = m + n - 1;                                                    // 逆序合并, 时间复杂度 O(m+n), 空间复杂度 O(1)
        m = m - 1;
        n = n - 1;

        while (n >= 0 || m >= 0)
        {
            if (m == -1)                                                  // 首先处理任意数组先被遍历完成的情况, 避免索引为负数
            {
                nums1[i] = nums2[n];
                n--;
            }
            else if (n == -1)
            {
                break;
            }
            else if (nums1[m] >= nums2[n])
            {
                nums1[i] = nums1[m];
                m--;
            }
            else
            {
                nums1[i] = nums2[n];
                n--;
            }

            i--;
        }

        // printf("%d, %d", m, n);
    }
};
// @lc code=end

