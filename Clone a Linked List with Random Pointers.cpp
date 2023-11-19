class Solution {
private:
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node* copyList(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        // Step 1: Create a clone list
        Node* cloneHead = nullptr;
        Node* cloneTail = nullptr;

        Node* temp = head;

        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        // Step 2: Create a map
        unordered_map<Node*, Node*> oldToNewNode;

        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while (originalNode != NULL ) {
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        // Step 3: Update arbitrary pointers
        originalNode = head;
        cloneNode = cloneHead;

        while (originalNode != NULL) {
            cloneNode->arb = oldToNewNode[originalNode->arb];
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};
