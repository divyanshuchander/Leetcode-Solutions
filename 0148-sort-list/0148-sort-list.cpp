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
    ListNode* findMid(ListNode* head) {
        ListNode *slow = head, *fast = head->next;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* mergeList(ListNode* head, ListNode* leftside,
                        ListNode* rightside) {
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

    ListNode* sortList(ListNode* head) {
        if (!head)
            return head;
        if (!head->next)
            return head;
        ListNode* mid = findMid(head);
        ListNode* leftside = head;
        ListNode* rightside = mid->next;
        mid->next = nullptr;
        leftside = sortList(leftside);
        rightside = sortList(rightside);
        return mergeList(head, leftside, rightside);
    }
};