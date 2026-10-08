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
        Node *dummy = new Node(0);
        Node *prev = dummy;
        Node *curr = nullptr;
        Node *temp = head;
        unordered_map<Node*, Node*> dict;

        while (temp){
            curr = new Node(temp->val);
            prev->next = curr;
            dict[temp] = curr;

            prev = curr;
            temp = temp->next;
        }

        temp = head;
        curr = dummy->next;

        while(temp){
            curr->random = temp->random ? dict[temp->random] : nullptr;
            curr = curr->next;
            temp = temp->next;
        }

        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna