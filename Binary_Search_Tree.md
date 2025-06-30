# BINARY SEARCH TREE
---

| Table Of Content |
| ---------------- |
| Implementation |
| Range Sum of BST |
| Search in a Binary Search Tree |
| Validate Binary Search Tree |
| Kth Smallest Element in a BST |
| Lowest Common Ancestor of a Binary Search Tree |
| Inorder predecessor and successor in BST |
| Two Sum IV - Input is a BST |
| Flatten BST to sorted list |
| Flatten Binary Tree to Linked List |

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

- Range Sum of BST
```c++
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
      int ans = 0;
      queue<TreeNode*> q;
      q.push(root);
      while(!q.empty())
      {
        TreeNode* temp = q.front();
        if(temp->val >= low && temp->val <= high)
        {
          ans = ans + temp->val;
        }
        q.pop();

        if(temp->left)
        {
          q.push(temp->left);
        }

        if(temp->right)
        {
          q.push(temp->right);
        }
      }
      return ans;
    }
};
```

```c++
class Solution {
public:
    void preOrderTraversal(TreeNode* root , int low , int high , int &sum)
    {
        if(root != NULL)
        {
            if(root->val >= low && root->val <= high)
            {
                sum = sum + root->val;
            }
            preOrderTraversal(root->left , low , high , sum);
            preOrderTraversal(root->right , low , high , sum);
        }
    }

    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        int sum = 0;
        preOrderTraversal(root , low , high , sum);
        return sum;
    }
};
```

- Search in a Binary Search Tree
```c++
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        if(root == NULL)
        {
            return NULL;
        }
        else if(root->val == val)
        {
            return root;
        }    
        else if(root->val > val)
        {
            return searchBST(root->left , val);
        }
        else if(root->val < val)
        {
            return searchBST(root->right , val);
        }
        return NULL;
    }
};
```

- Validate Binary Search Tree
```c++
class Solution {
public:
    bool isBST(TreeNode* root , long min , long max)
    {
        if(root == NULL)
        {
            return true;
        }
        if(root->val > min && root->val < max)
        {
            bool leftSubTree = isBST(root->left , min , root->val);
            bool rightSubTree = isBST(root->right , root->val , max);
            return (leftSubTree && rightSubTree);
        }
        else
        {
            return false;
        }   
    }

    bool isValidBST(TreeNode* root) 
    {
        return isBST(root , LONG_MIN , LONG_MAX);
    }
};
```

- Kth Smallest Element in a BST
```c++
class Solution {
public:
    void findKthSmallest(TreeNode* root , int k , int& count , int& ans)
    {
        if(root == NULL)
        {
            return;
        }
        findKthSmallest(root->left , k , count , ans);
        count++;
        if(count == k)
        {
            ans = root->val;
            return;
        }
        findKthSmallest(root->right , k , count , ans);
    }

    int kthSmallest(TreeNode* root, int k) 
    {
        int ans = 0;
        int count = 0;
        findKthSmallest(root , k , count , ans);
        return ans;
    }
};
```

- Lowest Common Ancestor of a Binary Search Tree
```c++
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root == NULL)
        {
            return NULL;
        }    
        else if(root->val > p->val && root->val > q->val)
        {
            return lowestCommonAncestor(root->left , p , q);
        }
        else if(root->val < p->val && root->val < q->val)
        {
            return lowestCommonAncestor(root->right , p , q);
        }
        return root;
    }
};
```

- Inorder predecessor and successor in BST
```c++

```

- Two Sum IV - Input is a BST
```c++
class Solution {
public:
    void inOrderTraversal(TreeNode* root , vector<int> &v)
    {
        if(root == NULL)
        {
            return;   
        }
        inOrderTraversal(root->left , v);
        v.push_back(root->val);
        inOrderTraversal(root->right , v);
    }

    bool findTarget(TreeNode* root, int k) 
    {
        vector<int> v;
        inOrderTraversal(root , v);
        int start = 0;
        int end = v.size()-1;
        while(start < end)
        {
            int sum = v[start] + v[end];
            if(sum == k)
            {
                return true;
            }
            else if(sum < k)
            {
                start++;
            }
            else if(sum > k)
            {
                end--;
            }
        }
        return false;
    }
};
```

- Flatten BST to sorted list
```c++
class Solution {
  public:
    void inOrderTraversal(Node* root , vector<int> &v)
    {
        if(root == NULL)
        {
            return;   
        }
        inOrderTraversal(root->left , v);
        v.push_back(root->data);
        inOrderTraversal(root->right , v);
    }
  
    Node *flattenBST(Node *root) 
    {
        vector<int> v;
        inOrderTraversal(root , v);
        Node* rootAns = new Node(v[0]);
        Node* current = rootAns;
        for(int i=1 ; i<v.size() ; i++)
        {
            Node* new_node = new Node(v[i]);
            current->left = NULL;
            current->right = new_node;
            current = new_node;
        }
        current->left = NULL;
        current->right = NULL;
        return rootAns;
    }
};
```

- Flatten Binary Tree to Linked List
```c++
class Solution {
public:
    TreeNode* lastVisitedNode = NULL;

    void flatten(TreeNode* root) 
    {
        if(root == NULL)
        {
            return;
        }
        flatten(root->right);
        flatten(root->left);
        root->left = NULL;
        root->right = lastVisitedNode;
        lastVisitedNode = root;
    }
};
```








---
