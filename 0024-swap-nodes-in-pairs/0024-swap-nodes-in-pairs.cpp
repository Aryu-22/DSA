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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev = dummy;
        
        while (prev->next != nullptr && prev->next->next != nullptr) {
            ListNode* firstNode = prev->next;
            ListNode* secondNode = prev->next->next;
            
            prev->next = secondNode;
            firstNode->next = secondNode->next;
            secondNode->next = firstNode;
            
            prev = firstNode;
        }
        
        ListNode* newHead = dummy->next;
        delete dummy;
        
        return newHead;
    }
};