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
    ListNode* mergeTwoLists(ListNode* leftside, ListNode* rightside) {
        if(!leftside ) return rightside;
        if(!rightside ) return leftside;
        if(!leftside && !rightside) return nullptr;
        ListNode* iterator;
        ListNode* i = leftside;
        ListNode* j = rightside;
        ListNode* answerNode;
        if (i->val <= j->val) {
            iterator = i;
            answerNode = i;
            i = i->next;
        } else {
            iterator = j;
            answerNode = j;
            j = j->next;
        }

        while (i && j) {
            if (i->val <= j->val) {
                iterator->next = i;
                i = i->next;
            } else {
                iterator->next = j;
                j = j->next;
            }
            iterator = iterator->next;
        }

        while (i) {
            iterator->next = i;
            i = i->next;
            iterator = iterator->next;
        }
        while (j) {
            iterator->next = j;
            j = j->next;
            iterator = iterator->next;
        }
        return answerNode;
    }
};
