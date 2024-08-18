# Binary Trees

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

Node *CreateBinaryTree(Node *root)
{
    int data;
    cout << "Enter data : ";
    cin >> data;
    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }
    
    cout << "Enter data for left of " << data << endl;
    root->left = CreateBinaryTree(root->left);
    cout << "Enter data for right of " << data << endl;
    root->right = CreateBinaryTree(root->right);
    return root;
}

Node *CreateBinaryTreeFromLevelOrderTraversal(Node *root)
{
    int data;
    queue<Node *> q;
    cout << "Enter data for root : ";
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter data for left of " << temp->data << endl;
        cin >> leftData;

        if(leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter data for right of " << temp->data << endl;
        cin >> rightData;

        if(rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }

    return root;
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

int main()
{
    Node *root = NULL;
/*
    cout << "Binary Tree Creation" << endl;
    root = CreateBinaryTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Level Order Traversal" << endl;
    LevelOrderTraversal(root);

    cout << endl;

    cout << "Pre Order Traversal" << endl;
    PreOrderTraversal(root);
    // 1 3 7 11 5 17
    cout << endl;

    cout << "In Order Traversal" << endl;
    InOrderTraversal(root);
    // 7 3 11 1 17 5
    cout << endl;

    cout << "Post Order Traversal" << endl;
    PostOrderTraversal(root);
    // 7 11 3 17 5 1
*/
    cout << "Binary Tree Creation From Level Order Traversal" << endl;
    root = CreateBinaryTreeFromLevelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    cout << "Level Order Traversal" << endl;
    LevelOrderTraversal(root);

    return 0;
}

/*
Output
  1
 3  5
7 11 17
*/
```

### Questions

- Preorder Traversal
```c++
void preOrderTraversal(Node* root , vector<int> &ans)
{
    if(root != NULL)
    {
        ans.push_back(root->data);
        preOrderTraversal(root->left , ans);
        preOrderTraversal(root->right , ans);
    }
}

vector<int> preorder(Node* root)
{
    vector<int> ans;
    preOrderTraversal(root , ans);
    return ans;
}
```
- Inorder Traversal
```c++
void inOrderTraversal(Node* root , vector<int> &ans)
    {
        if(root != NULL)
        {
            inOrderTraversal(root->left , ans);
            ans.push_back(root->data);
            inOrderTraversal(root->right , ans);
        }
    }
    
    vector<int> inOrder(Node* root)
    {
        vector<int> ans;
        inOrderTraversal(root , ans);
        return ans;
    }
```
- Postorder Traversal
```c++
void postOrderTraversal(Node* root , vector<int> &ans)
{
    if(root != NULL)
    {
        postOrderTraversal(root->left , ans);
        postOrderTraversal(root->right , ans);
        ans.push_back(root->data);
    }
}

vector <int> postOrder(Node* root)
{
    vector<int> ans;
    postOrderTraversal(root , ans);
    return ans;
}
```
- Count Leaves in Binary Tree
```c++
void preOrderTraversal(Node* root , int &count)
{
    if(root == NULL)
    {
        return;
    }
    if(root->left == NULL && root->right == NULL)
    {
        count++;
    }
    preOrderTraversal(root->left , count);
    preOrderTraversal(root->right , count);
}
   
int countLeaves(Node* root)
{
    int count = 0;
    preOrderTraversal(root , count);
    return count;
}
```
- Count Non-Leaf Nodes in Tree
```c++
class Solution {
  public:
    void preOrderTraversal(Node* root , int &count)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left != NULL || root->right != NULL)
        {
            count++;
        }
        preOrderTraversal(root->left , count);
        preOrderTraversal(root->right , count);
    }
  
    int countNonLeafNodes(Node* root) 
    {
        int count = 0;
        preOrderTraversal(root , count);
        return count;
    }
};
```










