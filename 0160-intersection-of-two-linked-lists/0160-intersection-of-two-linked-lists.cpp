/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (!headA && !headB)
            return nullptr;
        ListNode* A = headA;
        ListNode* B = headB;

        int cntA = 1, cntB = 1;

        while (A) {
            cntA++;
            A = A->next;
        }

        while (B) {
            cntB++;
            B = B->next;
        }

        A = headA;
        B = headB;

        if (cntA > cntB) {
            for (int i = 0; i < cntA - cntB; i++) {
                A = A->next;
            }
        } else if (cntB > cntA) {
            for (int i = 0; i < cntB - cntA; i++) {
                B = B->next;
            }
        }

        while (A) {
            if (A == B) {
                return A;
            } else {
                A = A->next;
                B = B->next;
            }
        }
        return nullptr;
    }
};