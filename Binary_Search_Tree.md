# BINARY SEARCH TREE

---

### Implementation
```c++
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *InsertBST(Node* &root , int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if(data < root->data)
    {
        root->left = InsertBST(root->left , data);
    }
    else
    {
        root->right = InsertBST(root->right , data);
    }
    return root;
}

void InputBST(Node* &root)
{
    int data;
    cout << "Enter data : "; 
    cin >> data;
    while(data != -1)
    {
        root = InsertBST(root , data);
        cin >> data;
    }
}

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;

            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void PreOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}

void PostOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}

bool SearchBST(Node *root , int key)
{
    if(root->data == key)
    {
        return true;
    }
    else if(key < root->data)
    {
        return SearchBST(root->left , key);
    }
    else if(key > root->data)
    {
        return SearchBST(root->right , key);
    }
    return false;
}

int minValueBST(Node *root)
{
    Node *temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int maxValueBST(Node *root)
{
    Node *temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

Node *DeleteNodeBST(Node* root , int key)
{
    if(root == NULL)
    {
        return root;
    }
    if(root->data == key)
    {
        // Case-1 : Zero Child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // Case-2 : Left Child Only
        if(root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // Case-3 : Right Child Only
        if(root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // Case-4 : Two Child
        if(root->left != NULL && root->right != NULL)
        {
            int mini = minValueBST(root->right);
            root->data = mini;
            root->right = DeleteNodeBST(root->right , mini);
            return root;
        }
    }
    else if(key < root->data)
    {
        root->left = DeleteNodeBST(root->left , key);
        return root;
    }
    else if(key > root->data)
    {
        root->right = DeleteNodeBST(root->right , key);
        return root;
    }
}

int main()
{
    Node *root = NULL;
    cout << "Binary Search Tree" << endl;
    InputBST(root);
    cout << endl;
    cout << "Level Order Traversal" << endl;
    LevelOrderTraversal(root);
    /*
    Level Order Traversal
                  10
                8    21
              7   27
             5
            4
           3
    */
    cout << endl;
    cout << "Pre-Order Traversal" << endl;
    PreOrderTraversal(root);
    cout << endl;
    cout << "In-Order Traversal" << endl;
    InOrderTraversal(root);
    cout << endl;
    cout << "Post-Order Traversal" << endl;
    PostOrderTraversal(root);
    cout << endl;
    cout << "Search - 21 : " << SearchBST(root , 21) << endl;
    cout << "Minimum : " << minValueBST(root) << endl;
    cout << "Maximum : " << maxValueBST(root) << endl;
    cout << "Delete Node - 7" << endl;
    root = DeleteNodeBST(root , 7);
    cout << "Level Order Traversal" << endl;
    LevelOrderTraversal(root);
    return 0;
}
```

### Questions
