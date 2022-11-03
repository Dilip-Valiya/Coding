#include <iostream>
using namespace std;

// Node class to represent node of linked list
class Node
{
public:
    int val;
    Node *next;

    // Default Constructor
    Node()
    {
        val = 0;
        next = NULL;
    }

    // Parameterized Constructor
    Node(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    // Default Constructor
    LinkedList()
    {
        head = NULL;
    }

    void insertNode(int);
    void printList();
    void deleteNode(int);
};

void LinkedList::insertNode(int data)
{
    Node *newNode = new Node(data);

    // Assign to head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Traverse till end
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::printList()
{
    Node *temp = head;

    // Check if list is empty
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    // Traverse and print node
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void LinkedList::deleteNode(int nodeOffSet)
{
    if (nodeOffSet <= 0)
    {
        cout << "offset should be positive!" << endl;
        return;
    }
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    int lenOfList = 0;
    Node *temp1 = head, *temp2 = NULL;
    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        lenOfList++;
    }
    if (nodeOffSet > lenOfList)
    {
        cout << "offset is out of range!" << endl;
        return;
    }
    temp1 = head;
    if (nodeOffSet == 1)
    {
        head = head->next;
        delete temp1;
        return;
    }
    while (nodeOffSet-- > 1)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;
}

// Driver Code
int main()
{
    LinkedList list;

    // Inserting nodes
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    cout << "Elements of the list are: ";

    // Print the list
    list.printList();
    cout << endl;

    // Delete node at position 2.
    list.deleteNode(2);

    cout << "Elements of the list are: ";
    list.printList();
    cout << endl;
    return 0;
}
