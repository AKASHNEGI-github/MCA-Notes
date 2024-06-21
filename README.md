MCA Notes

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
