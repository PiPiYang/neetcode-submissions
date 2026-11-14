/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head, *prev = nullptr, *next_temp = nullptr;

        while(cur != nullptr){
            next_temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next_temp;
        }
        return prev;
    }
};
