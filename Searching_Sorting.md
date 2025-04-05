# SEARCHING & SORTING

---

### Binary Search
```c++
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size()-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(target > nums[mid])
            {
                start = mid + 1;
            }
            else if(target < nums[mid])
            {
                end = mid - 1;
            }
        } 
        return -1;
    }
};
```

### Selection Sort
```c++
void selectionSort(int arr[] , int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        int minIndex = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i] , arr[minIndex]);
    }
}
```

### Insertion Sort
```c++
void insertionSort(int arr[] , int n)
{
   for(int i=1 ; i<n ; i++)
   {
       int curr = arr[i];
       int j = i-1;
       while(j >= 0 && arr[j] > curr)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = curr;
   }
}
```

### Bubble Sort
```c++
void bubbleSort(int arr[] , int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        bool swapped = false;
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}
```

### Sort an Array
```c++
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) // Counting Sort
    {
        int mini = *min_element(nums.begin() , nums.end());
        int maxi = *max_element(nums.begin() , nums.end());
        int range = maxi - mini + 1;
        vector<int> countArray(range , 0);
        for(int i=0 ; i<nums.size() ; i++) 
        {
            countArray[nums[i] - mini]++;
        }
        int index = 0;
        for(int i=0 ; i<range ; i++) 
        {
            while(countArray[i] > 0) 
            {
                nums[index] = i + mini;
                countArray[i]--;
                index++;
            }
        }
        return nums;
    }
};
```

### Merge Sort
```c++
void merge(int arr[] , int start , int mid , int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    
    int left_arr[n1];
    int right_arr[n2];
    
    for(int i=0 ; i<n1 ; i++)
    {
        left_arr[i] = arr[start + i];
    }
    for(int j=0 ; j<n2 ; j++)
    {
        right_arr[j] = arr[mid + 1 + j];
    }
    
    int i = 0;
    int j = 0;
    int k = start;
    
    while(i < n1 && j < n2)
    {
        if(left_arr[i] < right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
            k++;
        }
    }
    
    while(i < n1)
    {
        arr[k] = left_arr[i];
        i++;
        k++;
    }
    
    while(j < n2)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[] , int start , int end)
{
    if(start < end)
    {
        int mid = (start+end)/2;
        mergeSort(arr , start , mid);
        mergeSort(arr , mid+1 , end);
        merge(arr , start , mid , end);   
    }
}
```

### Quick Sort
```c++
int partition(int arr[] , int start , int end)
{
    int pivot = arr[start];
    int count = 0;
    for(int i=start+1 ; i<=end ; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivot_index = start + count;
    swap(arr[start] , arr[pivot_index]);
    
    int i = start;
    int j = end;
    while(i < pivot_index && j > pivot_index)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivot_index && j > pivot_index)
        {
            swap(arr[i++] , arr[j--]);
        }
    }
    
    return pivot_index;
}

void quickSort(int arr[] , int start , int end)
{
    if(start < end)
    {
        int p = partition(arr , start , end);
        quickSort(arr , start , p-1);
        quickSort(arr , p+1 , end);
    }
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








---
