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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* num1 = l1;
        ListNode* num2 = l2;
        ListNode* prev = num1;

        int numCarry = 0;

        while (num1 && num2) {
            int sum = num1->val + num2->val;
            if (numCarry) {
                sum += numCarry;
                numCarry = 0;
            }
            if (sum >= 10) {
                num1->val = sum % 10;
                numCarry = sum / 10;
            } else
                num1->val = sum;
            prev = num1;
            num1 = num1->next;
            num2 = num2->next;
        }
        while (num1) {
            int num = num1->val;
            if (numCarry) {
                num += numCarry;
                numCarry = 0;
                if (num >= 10) {
                    numCarry = num / 10;
                    num = num % 10;
                   
                }
                num1->val = num;
            }
            prev = num1;
            num1 = num1->next;
        }
         while (num2) {
            prev->next = num2;
            int num = num2->val;
            if (numCarry) {
                num += numCarry;
                numCarry = 0;
                if (num >= 10) {
                    numCarry = num / 10;
                    num = num % 10;
                }
                num2->val = num;
            }
            prev = num2;
            num2 = num2->next;
        }
        if(numCarry){
            prev->next = new ListNode(numCarry);
        }
    return l1;
    }
};