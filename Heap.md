# HEAP | PRIORITY QUEUE
---

| HEAP |
| ---- |
| Implementation |
| Max Heap |
| Min Heap |
| Heap Sort |
| Kth Smallest Element in an Array |
| Kth Largest Element in an Array |
| Minimum Cost of ropes |
| Merge two binary Max heaps |
| Check Completeness of a Binary Tree |
| Is Binary Tree Heap |

---
### Implementation
```c++
#include<bits/stdc++.h>
using namespace std;

class Heap
{
    public:
        int arr[100];
        int size;

        Heap()
        {
            arr[0] = -1;
            size = 0;
        }

        void Insert(int value)
        {
            size = size + 1;
            int index = size;
            arr[index] = value;
            while(index > 1)
            {
                int parent = index/2;
                if(arr[parent] < arr[index])
                {
                    swap(arr[parent] , arr[index]);
                    index = parent;
                }
                else
                {
                    return;
                }
            }
        }

        void Print()
        {
            for(int i=1 ; i<=size ; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void Delete()
        {
            if(size == 0)
            {
                cout << "Heap is Empty" << endl;
                return;
            }
            arr[1] = arr[size];
            size--;
            int i = 1;
            while(i < size)
            {
                int leftIndex = 2*i;
                int rightIndex = 2*i + 1;
                if(leftIndex < size && arr[i] < arr[leftIndex])
                {
                    swap(arr[i] , arr[leftIndex]);
                    i = leftIndex;
                }
                else if(rightIndex < size && arr[i] < arr[rightIndex])
                {
                    swap(arr[i] , arr[rightIndex]);
                    i = rightIndex;
                }
                else
                {
                    return;
                }
            }
        }
};

int main()
{
    cout << "MAX Heap" << endl;
    Heap h;
    h.Insert(50);
    h.Insert(55);
    h.Insert(53);
    h.Insert(52);
    h.Insert(54);
    h.Print(); // 55 54 53 50 52
    h.Delete();
    h.Print(); // 54 52 53 50
    return 0;
}
```

### Max Heap
```c++
void HeapifyMax(int arr[] , int n , int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;
    if(left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(arr[largest] , arr[i]);
        HeapifyMax(arr , n , largest);
    }
}

int main()
{
    int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50};
    int n = 5;
    for(int i=n/2 ; i>0 ; i--)
    {
        HeapifyMax(arr , n , i);
    }
    cout << "Heapify Max" << endl; // 55 53 54 52 50 
    for(int i=1 ; i<=n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### Min Heap
```c++
void HeapifyMin(int arr[] , int n , int i)
{
    int smallest = i;
    int left = 2*i;
    int right = 2*i + 1;
    if(left <= n && arr[smallest] > arr[left])
    {
        smallest = left;
    }
    if(right <= n && arr[smallest] > arr[right])
    {
        smallest = right;
    }
    if(smallest != i)
    {
        swap(arr[smallest] , arr[i]);
        HeapifyMin(arr , n , smallest);
    }
}

int main()
{
    int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50};
    int n = 5;
    for(int i=n/2 ; i>0 ; i--)
    {
        HeapifyMin(arr , n , i);
    }
    cout << "Heapify Min" << endl; // 50 52 55 54 53 
    for(int i=1 ; i<=n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### Heap Sort
```c++
#include<bits/stdc++.h>
using namespace std;

void HeapifyMax(int arr[] , int n , int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;
    if(left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(arr[largest] , arr[i]);
        HeapifyMax(arr , n , largest);
    }
}

void HeapSort(int arr[] , int n)
{
    int size = n;
    while(size > 1)
    {
        swap(arr[size] , arr[1]);
        size--;
        HeapifyMax(arr , size , 1);
    }
}

int main()
{
    int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50};
    int n = 5;
    for(int i=n/2 ; i>0 ; i--)
    {
        HeapifyMax(arr , n , i);
    }
    cout << "Heapify Max" << endl; // 55 53 54 52 50 
    for(int i=1 ; i<=n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    HeapSort(arr , n); // Heap Sort Call
    cout << endl;
    cout << "Heap Sort" << endl; // 50 52 53 54 55
    for(int i=1 ; i<=n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### Questions

- Kth Smallest Element in an Array
```c++
class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) 
    {
        priority_queue<int> max_heap;
        for(int i=0 ; i<k ; i++)
        {
            max_heap.push(arr[i]);
        }
        for(int i=k ; i<arr.size() ; i++)
        {
            if(arr[i] < max_heap.top())
            {
                max_heap.pop();
                max_heap.push(arr[i]);
            }
        }
        return max_heap.top();
    }
};
```

- Kth Largest Element in an Array
```c++
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int , vector<int> , greater<int>> min_heap;
        for(int i=0 ; i<k ; i++)
        {
            min_heap.push(nums[i]);
        }
        for(int i=k ; i<nums.size() ; i++)
        {
            if(nums[i] > min_heap.top())
            {
                min_heap.pop();
                min_heap.push(nums[i]);
            }
        }
        return min_heap.top();
    }
};
```

- Minimum Cost of ropes
```c++
class Solution {
  public:
    int minCost(vector<int>& arr) 
    {
        int cost = 0;
        priority_queue<int , vector<int> , greater<int>> pq;
        for(int i=0 ; i<arr.size() ; i++)
        {
            pq.push(arr[i]);
        }
        while(pq.size() > 1)
        {
            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();
            int sum = top1 + top2;
            cost = cost + sum;
            pq.push(sum);
        }
        return cost;
    }
};
```

- Merge two binary Max heaps
```c++
class Solution {
  public:
    void HeapifyMax(vector<int> &arr , int size , int i)
    {
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;
        if(left < size && arr[largest] < arr[left])
        {
            largest = left;
        }
        if(right < size && arr[largest] < arr[right])
        {
            largest = right;
        }
        if(largest != i)
        {
            swap(arr[largest] , arr[i]);
            HeapifyMax(arr , size , largest);
        }
    }
  
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) 
    {
        vector<int> c;
        for(int i=0 ; i<n ; i++)
        {
            c.push_back(a[i]);
        }
        for(int i=0 ; i<m ; i++)
        {
            c.push_back(b[i]);
        }
        for(int i=(c.size()/2)-1 ; i>=0 ; i--) // 0 - Based Indexing
        {
            HeapifyMax(c , c.size() , i);
        }
        return c;
    }
};
```

- Check Completeness of a Binary Tree
```c++
class Solution {
public:
    int countTreeNodes(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int countNodesLeftSubTree = countTreeNodes(root->left);
        int countNodesRighttSubTree = countTreeNodes(root->right);
        int totalTreeNodes = countNodesLeftSubTree + countNodesRighttSubTree + 1;
        return totalTreeNodes;
    }

    bool isCompleteBinaryTree(TreeNode* root , int index , int totalTreeNodes)
    {
        if(root == NULL)
        {
            return true;
        }
        if(index >= totalTreeNodes)
        {
            return false;
        }
        bool leftSubTree = isCompleteBinaryTree(root->left , 2*index+1 , totalTreeNodes);
        bool rightSubTree = isCompleteBinaryTree(root->right , 2*index+2 , totalTreeNodes);
        return (leftSubTree && rightSubTree);
    }

    bool isCompleteTree(TreeNode* root)
    {
        if(root == NULL)
        {
            return true;
        }
        int index = 0;
        int totalTreeNodes = countTreeNodes(root);
        return isCompleteBinaryTree(root , index , totalTreeNodes);
    }
};
```

- Is Binary Tree Heap
```c++
class Solution {
  public:
    int countTreeNodes(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int countNodesLeftSubTree = countTreeNodes(root->left);
        int countNodesRighttSubTree = countTreeNodes(root->right);
        int totalTreeNodes = countNodesLeftSubTree + countNodesRighttSubTree + 1;
        return totalTreeNodes;
    }

    bool isCompleteBinaryTree(Node* root , int index , int totalTreeNodes)
    {
        if(root == NULL)
        {
            return true;
        }
        if(index >= totalTreeNodes)
        {
            return false;
        }
        bool leftSubTree = isCompleteBinaryTree(root->left , 2*index+1 , totalTreeNodes);
        bool rightSubTree = isCompleteBinaryTree(root->right , 2*index+2 , totalTreeNodes);
        return (leftSubTree && rightSubTree);
    }
    
    bool isMaxOrderProperty(Node* root)
    {
        if(root->left == NULL && root->right == NULL)
        {
            return true;
        }
        else if(root->right == NULL)
        {
            return (root->data > root->left->data);
        }
        else if(root->left != NULL && root->right != NULL)
        {
            bool leftSubTree = isMaxOrderProperty(root->left);
            bool rightSubTree = isMaxOrderProperty(root->right);
            bool rootGreater = (root->data > root->left->data) && (root->data > root->right->data);
            return (leftSubTree && rightSubTree && rootGreater);
        }
    }
  
    bool isHeap(Node* tree) 
    {
        Node* root = tree;
        int index = 0;
        int totalTreeNodes = countTreeNodes(root);
        bool isCBT = isCompleteBinaryTree(root , index , totalTreeNodes);
        bool isMOP = isMaxOrderProperty(root);
        return (isCBT && isMOP);
    }
};
```



---
