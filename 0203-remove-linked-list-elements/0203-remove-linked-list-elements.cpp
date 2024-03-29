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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* pre = head;
        while(temp != nullptr){
            if(head -> val == val){
                head = head->next;
                pre = pre ->next;
            }else if(temp->val == val){
                pre->next = temp->next;
            }else{
                pre = temp;
            }   
                temp = temp->next;
        }
        return head;
    }
};