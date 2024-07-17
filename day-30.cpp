//leetcode - 92(Reverse linkedlist II)

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head) return nullptr;

        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        
        ListNode* current = prev->next;
        ListNode* next_node = current->next;

        
        for (int i = 0; i < right - left; i++) {
            current->next = next_node->next;
            next_node->next = prev->next;
            prev->next = next_node;
            next_node = current->next;
        }

        
        return dummy->next;
    }
};
