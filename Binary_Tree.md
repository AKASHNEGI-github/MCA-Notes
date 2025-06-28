# BINARY TREE
---

| Table of Content |
|

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
class Solution
{
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

- Identical Trees
```c++
class Solution
{
    public:
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1 == NULL && r2 == NULL)
        {
            return true;
        }
        else if(r1 == NULL && r2 != NULL)
        {
            return false;
        }
        else if(r1 != NULL && r2 == NULL)
        {
            return false;
        }
        bool data = r1->data == r2->data;
        bool leftSubTree = isIdentical(r1->left , r2->left);
        bool rightSubTree = isIdentical(r1->right , r2->right);
        if(data && leftSubTree && rightSubTree)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
```

- Symmetric Tree
```c++
class Solution {
public:
    bool isSymmetricFast(TreeNode* l , TreeNode* r)
    {
        if(l == NULL && r == NULL)
        {
            return true;
        }
        else if(l == NULL && r != NULL)
        {
            return false;
        }
        else if(l != NULL && r == NULL)
        {
            return false;
        }
        bool data = l->val == r->val;
        bool first = isSymmetricFast(l->left , r->right);
        bool second = isSymmetricFast(l->right , r->left);
        if(data && first && second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isSymmetric(TreeNode* root) 
    {
        if(root == NULL)
        {
            return true;
        }
        return isSymmetricFast(root->left , root->right);
    }
};
```

- Height of Binary Tree
```c++
class Solution
{
    public:
    int height(struct Node* node)
    {
        if(node == NULL)
        {
            return 0;
        }
        int heightLeftSubTree = height(node->left);
        int heightRightSubTree = height(node->right);
        int ans = max(heightLeftSubTree , heightRightSubTree) + 1;
        return ans;
    }
};
```

- Diameter of a Binary Tree
```c++
class Solution 
{
  public:
    pair<int , int> diameterFast(Node* root)
    {
        if(root == NULL)
        {
            pair<int , int> p = make_pair(0 , 0);
            return p;
        }

        pair<int , int> leftSubTree = diameterFast(root->left);
        pair<int , int> rightSubTree = diameterFast(root->right);
        
        int diameterLeftSubTree = leftSubTree.first;
        int diameterRightSubTree = rightSubTree.first;
        int totalHeight = leftSubTree.second + rightSubTree.second + 1;
        
         pair<int , int> ans;
         ans.first = max( totalHeight , max(diameterLeftSubTree , diameterRightSubTree) );
         ans.second = max(leftSubTree.second , rightSubTree.second) + 1;

         return ans;
    }
    
    int diameter(Node* root)
    {
        return diameterFast(root).first;
    }
};
```

- Balanced Tree Check
```c++
class Solution
{
    public:
    pair<bool , int> isBalancedFast(Node *root)
    {
        if(root == NULL)
        {
            pair<bool , int> p = make_pair(true , 0);
            return p;
        }

        pair<bool , int> leftSubTree = isBalancedFast(root->left);
        pair<bool , int> rightSubTree = isBalancedFast(root->right);
        
        bool balancedLeftSubTree = leftSubTree.first;
        bool balancedRightSubTree = rightSubTree.first;
        bool differenceHeight = abs(leftSubTree.second - rightSubTree.second) <= 1;
        
         pair<bool , int> ans;
         if(balancedLeftSubTree && balancedRightSubTree && differenceHeight)
         {
             ans.first = true;
         }
         else
         {
             ans.first = false;
         }
         ans.second = max(leftSubTree.second , rightSubTree.second) + 1;

         return ans;
    }
    
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
};
```

- Sum Tree
```c++
class Solution 
{
  public:
    pair<bool , int> isSumTreeFast(Node* root)
    {
        if(root == NULL)
        {
            pair<bool , int> p = make_pair(true , 0);
            return p;
        }
        
        if(root->left == NULL && root->right == NULL)
        {
            pair<bool , int> p = make_pair(true , root->data);
            return p;
        }
        
        pair<bool , int> leftSubTree = isSumTreeFast(root->left);
        pair<bool , int> rightSubTree = isSumTreeFast(root->right);
        
        bool sumLeftSubTree = leftSubTree.first;
        bool sumRightSubTree = rightSubTree.first;
        bool sumEqual = root->data == (leftSubTree.second + rightSubTree.second);
        
        pair<bool , int> ans;
        if(sumLeftSubTree && sumRightSubTree && sumEqual)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        ans.second = root->data + leftSubTree.second + rightSubTree.second;
        
        return ans;
    }
  
    bool isSumTree(Node* root) 
    {
        return isSumTreeFast(root).first;
    }
};
```

- ZigZag Tree Traversal
```c++
class Solution
{
    public:
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        
        queue<Node *> q;
        q.push(root);
        bool leftToRight = true;
        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp(size);
            for(int i=0 ; i<size ; i++)
            {
                Node* frontNode = q.front();
                q.pop();
                int index = leftToRight ? i : (size - i) - 1;
                temp[index] = frontNode->data;
                if(frontNode->left)
                {
                    q.push(frontNode->left);
                }
                if(frontNode->right)
                {
                    q.push(frontNode->right);
                }
            }
            leftToRight = !leftToRight;
            for(int i=0 ; i<temp.size() ; i++)
            {
                ans.push_back(temp[i]);
            }
        }
        
        return ans;
    }
};
```

- Tree Boundary Traversal
```c++
class Solution {
public:
    void leftTraversal(Node *root , vector<int> &ans)
    {
        if( (root == NULL) || (root->left == NULL && root->right == NULL) )
        {
            return;
        }
        ans.push_back(root->data);
        if(root->left)
        {
            leftTraversal(root->left , ans);
        }
        else
        {
            leftTraversal(root->right , ans);
        }
    }
    
    void leafTraversal(Node *root , vector<int> &ans)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
        }
        leafTraversal(root->left , ans);
        leafTraversal(root->right , ans);
    }
    
    void rightTraversal(Node *root , vector<int> &ans)
    {
        if( (root == NULL) || (root->left == NULL && root->right == NULL) )
        {
            return;
        }
        if(root->right)
        {
            rightTraversal(root->right , ans);
        }
        else
        {
            rightTraversal(root->left , ans);
        }
        ans.push_back(root->data);
    }

    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        ans.push_back(root->data);
        leftTraversal(root->left , ans);
        leafTraversal(root->left , ans);
        leafTraversal(root->right , ans);
        rightTraversal(root->right , ans);
        return ans;
    }
};
```

- Vertical Order Traversal of a Binary Tree
```c++
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        map<int , map<int , vector<int>>> Nodes;
        queue<pair<TreeNode* , pair<int , int>>> q;
        q.push(make_pair(root , make_pair(0 , 0)));
        while(!q.empty())
        {
            pair<TreeNode* , pair<int , int>> temp = q.front();
            q.pop();
            TreeNode* frontNode = temp.first;
            int axis = temp.second.first;
            int level = temp.second.second;
            Nodes[axis][level].push_back(frontNode->val);
            if(frontNode->left)
            {
                q.push(make_pair(frontNode->left , make_pair(axis-1 , level+1)));
            }
            if(frontNode->right)
            {
                q.push(make_pair(frontNode->right , make_pair(axis+1 , level+1)));
            }
        }
        vector<vector<int>> ans;
        for(auto i:Nodes)
        {
            vector<int> v;
            for(auto j:i.second)
            {
                sort(j.second.begin() , j.second.end());
                for(auto k:j.second)
                {
                    v.push_back(k);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
```

- Sum of nodes on the longest path
```c++
class Solution {
public:
    void solve(Node *root , int sum , int &maxSum , int level , int &maxLevel)
    {
        if(root == NULL)
        {
            if(level > maxLevel)
            {
                maxLevel = level;
                maxSum = sum;
            }
            else if(level == maxLevel)
            {
                maxSum = max(sum , maxSum);
            }
            return;
        }
        sum = sum + root->data;
        solve(root->left , sum , maxSum , level+1 , maxLevel);
        solve(root->right , sum , maxSum , level+1 , maxLevel);
    }

    int sumOfLongRootToLeafPath(Node *root) 
    {
        int sum = 0;
        int maxSum = 0;
        int level = 0;
        int maxLevel = 0;
        solve(root , sum , maxSum , level , maxLevel);
        return maxSum;
    }
};
```

- Lowest Common Ancestor of a Binary Tree
```c++
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(root == NULL)
        {
            return NULL;
        }    
        else if(root->val == p->val || root->val == q->val)
        {
            return root;
        }

        TreeNode* leftAns = lowestCommonAncestor(root->left , p , q);
        TreeNode* rightAns = lowestCommonAncestor(root->right , p , q);
        if(leftAns != NULL && rightAns != NULL)
        {
            return root;
        }
        else if(leftAns != NULL && rightAns == NULL)
        {
            return leftAns;
        }
        else if(leftAns == NULL && rightAns != NULL)
        {
            return rightAns;
        }
        else
        {
            return NULL;
        }
    }
};
```

- Binary Tree Maximum Path Sum
```c++
class Solution {
public:
    int pathSum(TreeNode* root , int &maxi)
    {
        if(root == NULL)
        {
            return 0;
        }
        int leftPathSum = max(0 , pathSum(root->left , maxi));
        int rightPathSum = max(0 , pathSum(root->right , maxi));
        maxi = max(maxi , root->val + leftPathSum + rightPathSum);
        return (root->val + max(leftPathSum , rightPathSum));
    }

    int maxPathSum(TreeNode* root) 
    {
        int maxi = INT_MIN;
        pathSum(root , maxi);
        return maxi;
    }
};
```






---
