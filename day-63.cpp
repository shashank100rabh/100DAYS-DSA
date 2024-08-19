//leetcode -138(copy list with random pointer)
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
        if (head == NULL) return head;

        Node* newhead = new Node(0);
        Node* newcurr = newhead;
        Node* curr = head;
        unordered_map <Node*, Node*> umap;

        while(curr !=NULL){
            Node* temp = new Node(curr->val);
            umap.insert({curr,temp});

            newcurr -> next = temp;
            newcurr = newcurr ->next;
            curr = curr->next;
        }
        curr = head;
        newcurr = newhead->next;
        while(curr){
            Node* random = curr->random;
            Node* newNode = umap[random];
            newcurr->random=newNode;

            newcurr = newcurr->next;
            curr = curr->next;
        }
        return newhead->next;
    }
};
