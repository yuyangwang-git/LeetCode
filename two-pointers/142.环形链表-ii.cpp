/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}                                 // C++ 构造函数列表语法
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p;
        ListNode *q;

        p = head;
        q = head;

        do
        {
            if (q == nullptr || q -> next == nullptr)
            {
                return nullptr;
            }
            
            p = p -> next;
            q = q -> next -> next;
        } while (p != q);

        p = head;
        
        while (p != q)
        {
            p = p -> next;
            q = q -> next;
        }
        
        return p;
    }
};
// @lc code=end

