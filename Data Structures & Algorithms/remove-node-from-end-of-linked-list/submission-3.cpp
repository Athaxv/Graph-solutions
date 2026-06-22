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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count  = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        if (count == 1){
            return nullptr;
        }
        int set = count - n;
        count = 0;
        ListNode* rep = head;
        ListNode* prev = nullptr;
        ListNode* val;
        while(rep != NULL){
            if (set == 0){
                val = rep->next;
                head = val;
                delete rep;
                return head;
            }
            else if (set == count){
                val = rep->next;
                prev->next = val;
                delete rep;
                return head;
            }
            else {
                prev = rep;
                rep = rep->next;
                count++;
            }
        }
        return head;
    }
};
