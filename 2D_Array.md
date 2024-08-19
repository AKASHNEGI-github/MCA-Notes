# 2D-ARRAY | MATRIX

---

### Implementation
```c++
// 2D-ARRAY | MATRIX

#include<bits/stdc++.h>
using namespace std;

void inputMatrix(int matrix[][3] , int row , int col)
{
    cout << "Enter matrix elements" << endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][3] , int row , int col)
{
    cout << "Matrix elements" << endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rowSum(int matrix[][3] , int row , int col)
{
    for(int i=0 ; i<row ; i++)
    {
        int rowSum = 0;
        for(int j=0 ; j<col ; j++)
        {
            rowSum = rowSum + matrix[i][j];
        }
        cout << "Sum of Row " << i << " : " << rowSum << endl;
    }
}

void colSum(int matrix[][3] , int row , int col)
{
    for(int i=0 ; i<col ; i++)
    {
        int colSum = 0;
        for(int j=0 ; j<row ; j++)
        {
            colSum = colSum + matrix[j][i];
        }
        cout << "Sum of Col " << i << " : " << colSum << endl;
    }
}

int minimum(int matrix[][3] , int row , int col)
{
    int mini = INT_MAX;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            mini = min(mini , matrix[i][j]);
        }
    }
    return mini;
}

int maximum(int matrix[][3] , int row , int col)
{
    int maxi = INT_MIN;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            maxi = max(maxi , matrix[i][j]);
        }
    }
    return maxi;
}

bool search(int matrix[][3] , int row , int col , int key)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(matrix[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

void transposeMatrix(int matrix[][3] , int row , int col)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=(i+1) ; j<col ; j++)
        {
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
}

int main()
{
    int row = 3;
    int col = 3;
    int matrix[3][3];

    //inputMatrix(matrix , row , col);
    //printMatrix(matrix , row , col);
    //rowSum(matrix , row , col);
    //colSum(matrix , row , col);
    //cout << "Minimum : " << minimum(matrix , row , col);
    //cout << "Maximum : " << maximum(matrix , row , col);
    //cout << "Key present : " << search(matrix , row , col , 5);
    //transposeMatrix(matrix , row , col);
    //printMatrix(matrix , row , col);

    return 0;
}

```

### Questions

- Matrix Diagonal Sum
```c++
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int sum = 0;
        int n = mat.size();
        for(int i=0 ; i<n ; i++)
        {
            sum = sum + mat[i][i];
            sum = sum + mat[i][(n-1) - i];
        }
        if(n%2 != 0)
        {
            sum = sum - mat[n/2][n/2];
        }
        return sum;
    }
};
```

- Flipping an Image
```c++
class Solution {
public:
    void flip(vector<int>& row)
    {
        int start = 0;
        int end = row.size()-1;
        while(start < end)
        {
            swap(row[start++] , row[end--]);
        }
    }

    void invert(vector<int>& row)
    {
        for(int i=0 ; i<row.size() ; i++)
        {
            if(row[i] == 0)
            {
                row[i] = 1;
            }
            else if(row[i] == 1)
            {
                row[i] = 0;
            }
        }
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        int n = image.size();
        for(int i=0 ; i<n ; i++)
        {
            flip(image[i]);
            invert(image[i]);
        }
        return image;
    }
};
```

- Largest Local Values in a Matrix
```c++
class Solution {
public:
    int getMax(vector<vector<int>>& grid , int rowStart , int colStart)
    {
        int maxi = INT_MIN;
        for(int i=rowStart ; i<(rowStart+3) ; i++)
        {
            for(int j=colStart ; j<(colStart+3) ; j++)
            {
                maxi = max(maxi , grid[i][j]);
            }
        }
        return maxi;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int row = (n-2);
        int col = (n-2);
        vector<vector<int>>  maxLocal( row , vector<int>(col) );
        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<col ; j++)
            {
                maxLocal[i][j] = getMax(grid , i , j);
            }
        }
        return maxLocal;
    }
};
```
