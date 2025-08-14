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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode *answerNode = new ListNode(-1), *dTemp = answerNode;

        ListNode* i = head;
        ListNode* j = head->next;

        while (j && i) {
            if (i->val != j->val) {
                dTemp->next = i;
                dTemp = dTemp->next;
                i = j;
                j = j->next;
            }

            else {
                while (i && i->val == j->val) {
                    i = i->next;
                }
                if (!i) {
                    dTemp->next = nullptr;
                    return answerNode->next;
                } else {
                    j = i->next;
                    if (!j) {
                        dTemp->next = i;
                        dTemp->next->next = nullptr;
                        return answerNode->next;
                    }
                }
            }
        }
        dTemp->next = i;
        dTemp = dTemp->next;

        dTemp->next = nullptr;
        return answerNode->next;
    }
};