/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* merge(Node* left, Node* right) {
	Node dummy(0);
	Node* tail = &dummy;
	while (left && right) {
		if (left->data < right->data) {
			tail->child = left;
			left = left->child;
		}
		else {
			tail->child = right;
			right = right->child;
		}
		tail = tail->child;
		tail->next = nullptr;
	}
	tail->child = left ? left : right;
	return dummy.child;
}

Node* flattenLinkedList(Node* head) {
    if (!head || !head->next) return head;

    Node* nextHead = flattenLinkedList(head->next);
    head->next = nullptr;           
    return merge(head, nextHead);
}

