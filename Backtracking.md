# BACKTRACKING
---

| BACKTRACKING |
| ------------ |
| Subsets |
| Letter Combinations of a Phone Number |
| Permutations |
| N-Queens |
| N-Queens II |
| Sudoku Solver |

---
### Questions

- Subsets
```c++
class Solution {
public:
    void getSubsets(vector<int>& nums , vector<vector<int>>& ans , vector<int> subset , int index)
    {
        // Base Case
        if(index == nums.size())
        {
            ans.push_back(subset);
            return;
        }
        // Include
        subset.push_back(nums[index]);
        getSubsets(nums , ans , subset , index+1);
        // Exclude
        subset.pop_back(); // Backtrack
        getSubsets(nums , ans , subset , index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int index = 0;
        vector<int> subset;
        vector<vector<int>> ans;
        getSubsets(nums , ans , subset , index);
        return ans;
    }
};
```

- Letter Combinations of a Phone Number
```c++
class Solution {
public:
    void getCombinations(string digits , vector<string>& ans , string subset , int index , string map[])
    {
        // Base Case
        if(index == digits.size())
        {
            ans.push_back(subset);
            return;
        }
        int digit = digits[index] - '0';
        string value = map[digit];
        for(int i=0 ; i<value.size() ; i++)
        {
            // Include
            subset.push_back(value[i]);
            getCombinations(digits , ans , subset , index+1 , map);
            // Exclude
            subset.pop_back(); // Backtrack
        }
    }

    vector<string> letterCombinations(string digits) 
    {
        int index = 0;
        string subset;
        vector<string> ans;
        string map[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
        if(digits.size() == 0)
        {
            return ans;
        }
        getCombinations(digits , ans , subset , index , map);
        return ans;    
    }
};
```

- Permutations
```c++
class Solution {
public:
    void getPermutations(vector<int> nums , vector<vector<int>>& ans , int index)
    {
        // Base Case
        if(index == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index ; i<nums.size() ; i++)
        {
            // Include
            swap(nums[index] , nums[i]);
            getPermutations(nums , ans , index+1);
            // Exclude
            swap(nums[index] , nums[i]); // Backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) 
    {
        int index = 0;
        vector<vector<int>> ans;
        getPermutations(nums , ans , index);
        return ans;    
    }
};
```

- N-Queens
```c++
class Solution {
public:
    bool isQueenSafe(vector<string>& board , int row , int col , int n)
    {
        // Horizontal
        for(int j=0 ; j<n ; j++)
        {
            if(board[row][j] == 'Q')
            {
                return false;
            }
        }
        // Vertical
        for(int i=0 ; i<n ; i++)
        {
            if(board[i][col] == 'Q')
            {
                return false;
            }
        }
        // Left Diagonal
        for(int i=row , j=col ; i>=0 && j>=0 ; i-- , j--)
        {
            if(board[i][j] == 'Q')
            {
                return false;
            }
        }
        // Right Diagonal
        for(int i=row , j=col ; i>=0 && j<n ; i-- , j++)
        {
            if(board[i][j] == 'Q')
            {
                return false;
            }
        }
        return true;
    }

    void nQueens(vector<string>& board , vector<vector<string>>& ans , int row , int n)
    {
        // Base Case
        if(row == n)
        {
            ans.push_back({board});
            return;
        }
        for(int j=0 ; j<n ; j++)
        {
            if(isQueenSafe(board , row , j , n))
            {
                // Include
                board[row][j] = 'Q';
                nQueens(board , ans , row+1 , n);
                // Exclude
                board[row][j] = '.'; // Backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) 
    {
        int row = 0;
        vector<vector<string>> ans;
        vector<string> board(n , string(n , '.'));
        nQueens(board , ans , row , n);
        return ans;    
    }
};
```

- N-Queens II
```c++

```

- Sudoku Solver
```c++
class Solution {
public:
    bool isDigitSafe(vector<vector<char>>& board , int row , int col , char digit)
    {
        // Horizontal
        for(int j=0 ; j<9 ; j++)
        {
            if(board[row][j] == digit)
            {
                return false;
            }
        }
        // Vertical
        for(int i=0 ; i<9 ; i++)
        {
            if(board[i][col] == digit)
            {
                return false;
            }
        }
        // Grid
        int startRow = (row/3)*3;
        int startCol = (col/3)*3;
        for(int i=startRow ; i<(startRow+3) ; i++)
        {
            for(int j=startCol ; j<(startCol+3) ; j++)
            {
                if(board[i][j] == digit)
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool sudokuSolver(vector<vector<char>>& board , int row , int col)
    {
        // Base Case
        if(row == 9)
        {
            return true;
        }
        int nextRow = row;
        int nextCol = col+1;
        if(nextCol == 9)
        {
            nextRow = row+1;
            nextCol = 0;
        }
        if(board[row][col] != '.')
        {
            return sudokuSolver(board , nextRow , nextCol);
        }
        // Place the digit
        for(char digit='1' ; digit<='9' ; digit++)
        {
            if(isDigitSafe(board , row , col , digit))
            {
                // Include
                board[row][col] = digit;
                if(sudokuSolver(board , nextRow , nextCol))
                {
                    return true;
                }
                // Exclude
                board[row][col] = '.'; // Backtrack
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) 
    {
        int row = 0;
        int col = 0;
        sudokuSolver(board , row , col);
    }
};
```







---
