//leetcode-82(remove duplicates from sorted list II)
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
        if(!head || !head->next) return head;
        ListNode* mahaveerwa_wala = head->next;
        
        if( mahaveerwa_wala->val == head->val){
            while(  mahaveerwa_wala->val == head->val){
                  mahaveerwa_wala =  mahaveerwa_wala->next;
                  if( mahaveerwa_wala == NULL){
                    head->next = mahaveerwa_wala;
                    return NULL;
                  }
            }
            return deleteDuplicates( mahaveerwa_wala);
        } else {
            head->next = deleteDuplicates( mahaveerwa_wala);
            return head;
        }
    }
};
