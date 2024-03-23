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
        ListNode *head = new ListNode();
        ListNode *ans = head;
        ListNode *pre = head;
        int flag = 0;
        while(1){
            head -> val = l1 -> val + l2 -> val + flag;
            flag = 0;
            if(head->val > 9){
                head->val %= 10;
                flag = 1;
            }
            ListNode *temp = new ListNode();
            pre = head;
            head -> next = temp;
            head = temp;
            if(l1 -> next == nullptr && l2 -> next == nullptr && flag == 0){
                pre -> next = nullptr;
                break;
            }
            if(l1 -> next != nullptr){
                l1 = l1 -> next;
            }else{
                l1 -> val = 0;
            }
            if(l2 -> next != nullptr){
                l2 = l2 -> next;
            }else{
                l2 -> val = 0;
            }
            
        }
        
        return ans;
    }
};