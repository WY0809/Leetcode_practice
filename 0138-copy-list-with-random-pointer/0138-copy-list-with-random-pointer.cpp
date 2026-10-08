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
        if (!head) return nullptr;
        
        unordered_map<Node*, Node*> dict;
        Node *curr = head;
    
        while (curr){
            dict[curr] = new Node(curr->val);
            curr = curr->next;
        }

        curr = head;

        while(curr){
            dict[curr]->next = curr->next ? dict[curr->next] : nullptr;
            dict[curr]->random = curr->random ? dict[curr->random] : nullptr;
            curr = curr->next;
        }

        return dict[head];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna