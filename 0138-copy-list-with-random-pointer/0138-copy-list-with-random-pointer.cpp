/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        unordered_map<Node* , Node*> visitedNodes;
        Node* temp = head;
        Node* answerNode = new Node(-1);
        Node* it = answerNode;

        while(temp){
            it->next = new Node(temp->val);
            it = it->next;
            visitedNodes[temp] = it;
            temp = temp->next;
        }

        //second pass

        temp = head;
        it = answerNode->next;
        while(temp){
            if(temp->random){
                it->random = visitedNodes[temp->random];                
            }
            it = it->next;
            temp = temp->next;
        }

        return answerNode->next;
    }
};