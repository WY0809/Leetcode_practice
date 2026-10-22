struct Node{
    int val;
    Node* prev;
    Node* next;
    Node() : val(0), prev(nullptr), next(nullptr) {}
    Node(int x) : val(x), prev(nullptr), next(nullptr) {}
};

class MyCircularQueue {
public:
    Node* head;
    Node* tail;
    int capacity;
    int count = 0;

    MyCircularQueue(int k) {
        Node* curr = new Node();
        head = curr;
        tail = curr;
        capacity = k;

        for(int i = 1; i < k ; i++){
            curr->next = new Node();
            curr->next->prev = curr;
            curr = curr->next;
        }

        curr->next = head;
        head->prev = curr;
    }
    
    bool enQueue(int value) {
        if (count == capacity)
            return false;

        tail->val = value;
        tail = tail->next;
        count++;

        return true;
    }
    
    bool deQueue() {
        if(count == 0)
            return false;

        head = head->next;
        count--;

        return true;
    }
    
    int Front() {
        return isEmpty() ? -1 : head->val;
    }
    
    int Rear() {
        return isEmpty() ? -1 : tail->prev->val;
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna