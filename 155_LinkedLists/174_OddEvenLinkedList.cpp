#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int value;
            Node *next;
            Node(int value) : value(value), next(nullptr){};
        };

*****************************************************************/

Node *oddEvenLinkedList(Node *head)
{
    // Write your code here.
    if (!head || !head->next)
        return head;

    Node *odd = head;
    Node *even = head->next;
    Node *evenBegin = head->next;

    while (even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenBegin;
    return head;
}