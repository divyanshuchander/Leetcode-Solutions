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
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        ListNode* forward;
        while (temp) {
            forward = temp->next;
            temp->next = prev;
            prev = temp;
            temp = forward;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        // finding the mid
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reversing ll after slow from slow->next
        ListNode* reverseHead =
            (!fast) ? reverseLL(slow) : reverseLL(slow->next); // 2nd pointer
        ListNode* tempHead = head;
        while (reverseHead) {
            if (reverseHead->val == tempHead->val) {
                tempHead = tempHead->next;
                reverseHead = reverseHead->next;
            } else
                return false;
        }
        return true;
    }
};