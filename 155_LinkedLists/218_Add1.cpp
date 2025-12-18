Node *reverseLL(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *addOne(Node *head)
{
    // Write Your Code Here.
    head = reverseLL(head);
    Node *temp = head;
    Node *prev = NULL;
    while (temp && temp->data == 9)
    {
        prev = temp;
        temp->data = 0;
        temp = temp->next;
    }
    if (temp)
    {
        temp->data = temp->data + 1;
    }
    else
    {
        Node *newNode = new Node(1);
        prev->next = newNode;
    }
    head = reverseLL(head);
    return head;
}