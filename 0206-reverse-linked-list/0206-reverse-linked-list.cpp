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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;

        ListNode *ans = new ListNode();
        while(1){
            ans -> val = head -> val;
            ListNode *temp = new ListNode();
            temp -> next = ans;
            if(head -> next == nullptr){
                return ans;
            }
            ans = temp;
            head = head -> next;
        }
    }
};