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

//Hashmap approach

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        unordered_map<Node*, Node*> map;
        Node* temp = head;

        while (temp) {
            Node* newNode = new Node(temp->val);
            map[temp] = newNode;
            temp = temp->next;
        }
        Node* newHead = map[head];
        temp = head;
        while (temp) {
            newHead->next = map[temp->next];
            newHead->random = map[temp->random];
            temp = temp->next;
            newHead = newHead->next;
        }
        return map[head];
    }
};

//Interweaving approach . No extra space
Node* copyRandomList(Node* head) {
    if (!head) return nullptr;
    Node* temp = head;

    //Interweaving
    while (temp) {
        Node* newNode = new Node(temp->val);
        Node* nextNode = temp->next;
        temp->next = newNode;
        newNode->next = nextNode;
        temp = temp->next->next;
    }

    //Assigning random pointer
    temp = head;
    while (temp) {
        Node* copy = temp->next;
        if (temp->random) copy->random = temp->random->next;
        temp = temp->next->next;
    }

    //Separating lists
    Node* dummy = new Node(-1);
    Node* tail = dummy;
    temp = head;
    while (temp) {
        tail->next = temp->next;
        tail = tail->next;
        temp->next = tail->next;
        temp = temp->next;
    }
    Node* newHead = dummy->next;
    delete dummy;
    return newHead;
}