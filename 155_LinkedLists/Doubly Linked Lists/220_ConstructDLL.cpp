class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node *constructDLL(vector<int> &arr)
{
    // Your code here
    if (arr.empty())
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *back = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->prev = back;
        back->next = temp;
        back = temp;
    }
    return head;
}