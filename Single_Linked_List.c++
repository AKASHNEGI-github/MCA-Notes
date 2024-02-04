#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

Node* head = NULL;

void Display(Node* &head)
{
    if(head == NULL)
    {
        cout << "No Linked List" << endl;
    }
    else
    {
        cout << "Linked List" << endl;
        Node* ptr = head;
        while(ptr != NULL)
        {
            cout << ptr->data << "  ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

void InsertAtHead(Node* &head , int data)
{
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void InsertAtTail(Node* &head , int data)
{
    Node* new_node = new Node(data);
    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        Node* ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
}

void InsertAtBefore(Node* &head , int data , int num)
{
    Node* ptr = head;
    Node* new_node = new Node(data);
    while(ptr->next->data != num)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void InsertAtAfter(Node* &head , int data , int num)
{
    Node* ptr = head;
    Node* new_node = new Node(data);
    while(ptr->data != num)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void DeleteAtHead(Node* &head)
{
    Node* ptr = head;
    head = head->next;
    free(ptr);
}

void DeleteAtTail(Node* &head)
{
    Node* ptr = head;
    Node* preptr = ptr;
    while(ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
}

void DeleteAtMiddle(Node* &head , int num)
{
    Node* ptr = head;
    Node* preptr = ptr;
    while(ptr->data != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
}

void Reverse(Node* &head)
{
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void Search(Node* &head , int num)
{
    Node* ptr = head;
    while(ptr->data != num)
    {
        ptr = ptr->next;
    }
    if(ptr->data == num)
    {
        cout << "Data " << num << " present" << endl;
    }
}

int FindLength(Node* &head)
{
    Node* ptr = head;
    int length = 0;
    while(ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    return length;
}

int FindMiddle(Node* &head)
{
    if(head == NULL)
    {
        return 0;
    }
    else
    {
        Node* ptr = head;
        int length = FindLength(head);
        if(length % 2 == 0)
        {
            int count = 1;
            while(count != length/2)
            {
                count++;
                ptr = ptr->next;
            }
            return ptr->data;
        }
        else
        {
            int count = 0;
            while(count != length/2)
            {
                count++;
                ptr = ptr->next;
            }
            return ptr->data;
        }
    }
}

int main()
{
    Display(head);
    cout << "Length : " << FindLength(head) << endl;
    cout << "Middle : " << FindMiddle(head) << endl;
    InsertAtHead(head , 0);
    InsertAtTail(head , 1);
    InsertAtTail(head , 3);
    InsertAtTail(head , 5);
    Display(head);
    InsertAtBefore(head , 2 , 3);
    Display(head);
    InsertAtAfter(head , 4 , 3);
    Display(head);
    Reverse(head);
    Display(head);
    Reverse(head);
    Display(head);
    cout << "Length : " << FindLength(head) << endl;
    cout << "Middle : " << FindMiddle(head) << endl;
    DeleteAtHead(head);
    Display(head);
    DeleteAtTail(head);
    Display(head);
    DeleteAtMiddle(head , 3);
    Display(head);
    cout << "Length : " << FindLength(head) << endl;
    Display(head);
    cout << "Middle : " << FindMiddle(head) << endl;
    Search(head , 4);
    Display(head);

    return 0;
}