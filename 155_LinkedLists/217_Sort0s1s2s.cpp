//using dummy nodes
class Solution {
  public:
    Node* segregate(Node *head){
    // Write your code here.
        Node *zeroHead = new Node(-1);
        Node *oneHead = new Node(-1);
        Node *twoHead = new Node(-1);
        Node *zeroTail = zeroHead, *oneTail = oneHead, *twoTail = twoHead;
    
        Node* temp = head;
        while(temp) {
            if (temp -> data == 0) {
                zeroTail -> next = temp;
                zeroTail = zeroTail->next;
            }
            else if (temp -> data == 1) {
                oneTail -> next = temp;
                oneTail = oneTail->next;
            }
            else if (temp -> data == 2) {
                twoTail -> next = temp;
                twoTail = twoTail->next;
            }
            temp = temp->next;
        }
        zeroTail->next = oneHead->next ? oneHead->next : twoHead->next;
        oneTail->next = twoHead->next;
        twoTail->next = NULL;
        Node* newNode = zeroHead->next;
        delete zeroHead; delete oneHead; delete twoHead;
        return newNode;
    }
};

//lengthy code
Node* sortList(Node *head){
    // Write your code here.
    Node* zeroHead = nullptr;
    Node* zeroTail = nullptr;
    Node* oneHead = nullptr;
    Node* oneTail = nullptr;
    Node* twoHead = nullptr;
    Node* twoTail = nullptr;
    bool zero = false, one = false, two = false;
    Node* temp1 = head;
    while (temp1) {
        if (zero && temp1 -> data == 0) {
            zeroTail -> next  = temp1;
            zeroTail = zeroTail -> next;
        }
        else if (one && temp1 -> data == 1) {
            oneTail -> next  = temp1;
            oneTail = oneTail -> next;
        }
        else if (two && temp1 -> data == 2) {
            twoTail -> next  = temp1;
            twoTail = twoTail -> next;
        }
        if (!zero && temp1 -> data == 0) {
            zeroHead = temp1;
            zeroTail = zeroHead;
            zero = true;
        }
        else if (!one && temp1 -> data == 1) {
            oneHead = temp1;
            oneTail = oneHead;
            one = true;
        }
        else if (!two && temp1 -> data == 2) {
            twoHead = temp1;
            twoTail = twoHead;
            two = true;
        }
        temp1 = temp1->next;
    }
    if (zero) {
        if (one) {
            if (two) {
                zeroTail->next = oneHead;
                oneTail->next = twoHead;
                twoTail->next = nullptr;
                return zeroHead;
            }
            else {
                zeroTail->next = oneHead;
                oneTail->next=nullptr;
                return zeroHead;
            }
        }
        else {
            if (two) {
                zeroTail->next = twoHead;
                twoTail->next = nullptr;
                return zeroHead;
            }
            else {
                zeroTail->next = nullptr;
                return zeroHead;
            }
        }
    }
    else if (one) {
        if (two) {
            oneTail->next = twoHead;
            twoTail->next = nullptr;
            return oneHead;
        }
        else {
            oneTail->next=nullptr;
            return oneHead;
        }
    }
    else if (two) {
        twoTail->next=nullptr;
        return twoHead;
    }
}