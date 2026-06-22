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
        ListNode* temp = head;
        if (head == nullptr) {
            return head;
        }
        ListNode* prev = NULL;
        ListNode* val;
        while(temp != NULL){
            val = temp->next;
            temp->next = prev;
            prev = temp;
            temp = val;
        }
        return prev;
    }
};
