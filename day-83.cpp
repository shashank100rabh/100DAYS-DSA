//leetcode -83(remove duplicates from sorted list)
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
        if(head == nullptr) return head;

        ListNode* ptr = head;
        while(ptr->next != nullptr){
            if(ptr->val == ptr->next->val){
                ptr->next = ptr->next->next;
            }
            else{
                ptr= ptr->next;
            }
        }
        return head;
        
    }
};
