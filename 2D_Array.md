# 2D-ARRAY | MATRIX
---

| MATRIX |
| ------ |
| Implementation |
| Find Missing and Repeated Values |
| Transpose Matrix |
| Sum of upper and lower triangles |
| Multiply 2 matrices |
| Search a 2D Matrix |
| Search a 2D Matrix II |
| Find a Peak Element II |
| Wave Matrix |
| Spiral Matrix |
| Spiral Matrix II |

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
    //printMatrix(matrix , row , col);

    return 0;
}

```

### Questions

- Find Missing and Repeated Values
```c++
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int repeated = -1;
        int missing = -1;
        int n = grid.size();
        vector<int> v(n*n + 1 , 0);
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                v[grid[i][j]]++;
            }
        }
        for(int i=1 ; i<v.size() ; i++)
        {
            if(v[i] > 1)
            {
                repeated = i;
            }
            else if(v[i] == 0)
            {
                missing = i;
            }
        }
        return {repeated , missing};
    }
};
```

```c++
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int nSquare = n*n;
        long actualSum = 0;
        long long actualSquareSum = 0;
        long long expectedSum = 1LL * nSquare * (nSquare + 1)/2; // Expected Sum Of N-Natural Numbers
        long long expectedSquareSum = 1LL * nSquare * (nSquare + 1) * (2 * nSquare + 1)/6; // Expected Square-Sum Of N-Natural Numbers
        for(int i=0 ; i<grid.size() ; i++)
        {
            for(int j=0 ; j<grid.size() ; j++)
            {
                actualSum = actualSum + grid[i][j];
                actualSquareSum = actualSquareSum + (long long)(grid[i][j] * grid[i][j]);
            }
        }
        long long differenceSum = actualSum - expectedSum; // a - b
        long long differenceSquareSum = actualSquareSum - expectedSquareSum; // a² - b²
        long long sum_a_b = differenceSquareSum/differenceSum; // a + b = (a² - b²) / (a - b)
        int a = (sum_a_b + differenceSum)/2;
        int b = (sum_a_b - differenceSum)/2;
        return {a , b};
    }
};
```

- Transpose Matrix
```c++
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> ans(col , vector<int>(row));
        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<col ; j++)
            {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
```

- Sum of upper and lower triangles
```c++
class Solution {
  public:
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int matrixSize) 
    {
        int upperTriangleSum = 0;
        int lowerTriangleSum = 0;
        for(int i=0 ; i<matrixSize ; i++)
        {
            for(int j=0 ; j<matrixSize ; j++)
            {
                if(j>=i && j<matrixSize)
                {
                    upperTriangleSum = upperTriangleSum + matrix[i][j];
                }
                if(j>=0 && j<=i)
                {
                    lowerTriangleSum = lowerTriangleSum + matrix[i][j];
                }
            }
        }
        return {upperTriangleSum , lowerTriangleSum};
    }
};
```

- Multiply 2 matrices
```c++
class Solution {
  public:
    void Multiply(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) 
    {
        int row1 = matrixA.size();
        int col1 = matrixA[0].size();
        
        int row2 = matrixB.size();
        int col2 = matrixB[0].size();
        
        vector<vector<int>> matrixC;
        if(col1 == row2)
        {
            for(int i=0 ; i<row1 ; i++)
            {
                vector<int> temp;
                for(int j=0 ; j<col2 ; j++)
                {
                    int sum = 0;
                    for(int k=0 ; k<col1 ; k++)
                    {
                        sum = sum + (matrixA[i][k] * matrixB[k][j]);
                    }
                    temp.push_back(sum);
                }
                matrixC.push_back(temp);
            }
        }
        matrixA = matrixC;
    }
};
```

- Row With Maximum Ones
```c++
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        int row = mat.size();
        int col = mat[0].size();
        int rowIndex = 0;
        int maxCountOne = 0;
        for(int i=0 ; i<row ; i++)
        {
            int countOne = 0;
            for(int j=0 ; j<col ; j++)
            {
                if(mat[i][j] == 1)
                {
                    countOne++;
                }
            }
            if(countOne > maxCountOne)
            {
                rowIndex = i;
                maxCountOne = countOne;
            }
        }
        return {rowIndex , maxCountOne};
    }
};
```

- Count Negative Numbers in a Sorted Matrix
```c++
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        int i = 0;
        int j = col-1;
        while(i<row && j>=0)
        {
            if(grid[i][j] < 0)
            {
                count = count + (row-i);
                j--;
            }
            else
            {
                i++;
            }
        }
        return count;
    }
};
```

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

- Rotate Image
```c++
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for(int i=0 ; i<(n-1) ; i++) // Transpose Matrix
        {
            for(int j=(i+1) ; j<n ; j++)
            {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        for(int i=0 ; i<n ; i++) // Reverse Rows
        {
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};
```

- Sum in a Matrix
```c++
class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) 
    {
        int row = nums.size();
        int col = nums[0].size();
        int score = 0;
        for(int i=0 ; i<row ; i++)
        {
            sort(nums[i].begin() , nums[i].end());
        }
        for(int i=0 ; i<col ; i++)
        {
            int maxi = INT_MIN;
            for(int j=0 ; j<row ; j++)
            {
                maxi = max(maxi , nums[j][i]);
            }
            score = score + maxi;
        }
        return score;
    }
};
```

- Search a 2D Matrix
```c++
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col - 1;

        while(start <= end)
        {
            int mid = start + (end-start)/2;
            int element = matrix[mid/col][mid%col];
            if(element == target)
            {
                return true;
            }
            else if(element < target)
            {
                start = mid + 1;
            }
            else if(element > target)
            {
                end = mid - 1;
            }
        }
        return false;
    }
};
```

- Search a 2D Matrix II
```c++
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while(rowIndex < row && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];
            if(element == target)
            {
                return true;
            }
            else if(element < target)
            {
                rowIndex++;
            }
            else if(element > target)
            {
                colIndex--;
            }
        }
        return false;
    }
};
```

- Find a Peak Element II
```c++
class Solution {
public:
    int findMaxRowIndex(vector<vector<int>>& mat , int row , int col , int mid)
    {
        int maxi = -1;
        int maxiIndex = -1;
        for(int i=0 ; i<row ; i++)
        {
            if(mat[i][mid] > maxi)
            {
                maxi = mat[i][mid];
                maxiIndex = i;
            }
        }
        return maxiIndex;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) 
    {
        int row = mat.size();
        int col = mat[0].size();    

        int start = 0;
        int end = col - 1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            int maxRowIndex = findMaxRowIndex(mat , row , col , mid);
            int left = (mid - 1 >= 0) ? mat[maxRowIndex][mid-1] : -1;
            int right = (mid + 1 < col) ? mat[maxRowIndex][mid+1] : -1;
            if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right)
            {
                return {maxRowIndex , mid};
            }
            else if(mat[maxRowIndex][mid] < right)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return {-1 , -1};
    }
};
```

- Wave Matrix
```c++

```

- Spiral Matrix
```c++
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int totalElement = row*col;

        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;

        vector<int> ans;
        while(count < totalElement)
        {
            // Starting Row
            for(int index=startCol ; index<=endCol && (count < totalElement) ; index++)
            {
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            // Ending Col
            for(int index=startRow ; index<=endRow && (count < totalElement) ; index++)
            {
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            // Ending Row
            for(int index=endCol ; index>=startCol && (count < totalElement) ; index--)
            {
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            // Starting Col
            for(int index=endRow ; index>=startRow && (count < totalElement) ; index--)
            {
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};
```

- Spiral Matrix II
```c++
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        int count = 1;
        int totalElement = n*n;

        int row = n;
        int col = n;
        vector<vector<int>> matrix(row , vector<int>(col , 0));

        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;

        while(count <= totalElement)
        {
            // Starting Row
            for(int index=startCol ; index<=endCol && (count <= totalElement) ; index++)
            {
                matrix[startRow][index] = count;
                count++;
            }
            startRow++;

            // Ending Col
            for(int index=startRow ; index<=endRow && (count <= totalElement) ; index++)
            {
                matrix[index][endCol] = count;
                count++;
            }
            endCol--;

            // Ending Row
            for(int index=endCol ; index>=startCol && (count <= totalElement) ; index--)
            {
                matrix[endRow][index] = count;
                count++;
            }
            endRow--;

            // Starting Col
            for(int index=endRow ; index>=startRow && (count <= totalElement) ; index--)
            {
                matrix[index][startCol] = count;
                count++;
            }
            startCol++;
        }
        return matrix;   
    }
};
```



---





