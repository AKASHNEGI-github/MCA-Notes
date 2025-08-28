# BACKTRACKING
---

| BACKTRACKING |
| ------------ |
| Subsets |
| Subsets II |
| Letter Combinations of a Phone Number |
| Permutations |
| Permutations II |
| N-Queens |
| N-Queens II |
| Check Knight Tour Configuration |
| Word Search |
| Sudoku Solver |
| Valid Sudoku |

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

- Subsets II
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
        int nextIndex = index+1;
        // Skip Duplicates
        while(nextIndex < nums.size() && nums[nextIndex] == nums[nextIndex-1])
        {
            nextIndex++;
        }
        getSubsets(nums , ans , subset , nextIndex);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        int index = 0;
        vector<int> subset;
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
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

- Permutations II
```c++

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

    void nQueens(vector<string>& board , vector<vector<string>>& ans , int& total , int row , int n)
    {
        // Base Case
        if(row == n)
        {
            total++;
            ans.push_back({board});
            return;
        }
        for(int j=0 ; j<n ; j++)
        {
            if(isQueenSafe(board , row , j , n))
            {
                // Include
                board[row][j] = 'Q';
                nQueens(board , ans , total , row+1 , n);
                // Exclude
                board[row][j] = '.'; // Backtrack
            }
        }
    }

    int totalNQueens(int n) 
    {
        int row = 0;
        int total = 0;
        vector<vector<string>> ans;
        vector<string> board(n , string(n , '.'));
        nQueens(board , ans , total , row , n);
        return total;        
    }
};
```

- Check Knight Tour Configuration
```c++
class Solution {
public:
    bool isKnightValid(vector<vector<int>>& grid , int n , int row , int col , int expectedMove)
    {
        // Base Case
        if(expectedMove == n*n)
        {
            return true;
        }
        if(row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != expectedMove)
        {
            return false;
        }
        // 8 - Possible Moves
        bool ans1 = isKnightValid(grid , n , row-1 , col-2 , expectedMove+1);
        bool ans2 = isKnightValid(grid , n , row-2 , col-1 , expectedMove+1);
        bool ans3 = isKnightValid(grid , n , row-2 , col+1 , expectedMove+1);
        bool ans4 = isKnightValid(grid , n , row-1 , col+2 , expectedMove+1);
        bool ans5 = isKnightValid(grid , n , row+1 , col+2 , expectedMove+1);
        bool ans6 = isKnightValid(grid , n , row+2 , col+1 , expectedMove+1);
        bool ans7 = isKnightValid(grid , n , row+2 , col-1 , expectedMove+1);
        bool ans8 = isKnightValid(grid , n , row+1 , col-2 , expectedMove+1);
        return (ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8);
    }

    bool checkValidGrid(vector<vector<int>>& grid) 
    {   
        int row = 0;
        int col = 0;
        int expectedMove = 0;
        int n = grid.size();
        return isKnightValid(grid , n , row , col , expectedMove);
    }
};
```

- Word Search
```c++
class Solution {
public:
    bool isWordExist(vector<vector<char>>& board , string word , int row , int col , int wordIndex)
    {
        if(wordIndex == word.size())
        {
            return true;
        }
        if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || board[row][col] != word[wordIndex] || board[row][col] == '.')
        {
            return false;
        }
        // Include
        char currentCharacter = board[row][col];
        board[row][col] = '.';
        // 4 - Possible Moves
        bool ans1 = isWordExist(board , word , row-1 , col , wordIndex+1);    
        bool ans2 = isWordExist(board , word , row , col+1 , wordIndex+1);    
        bool ans3 = isWordExist(board , word , row+1 , col , wordIndex+1);    
        bool ans4 = isWordExist(board , word , row , col-1 , wordIndex+1);    
        if(ans1 || ans2 || ans3 || ans4)
        {
            return true;
        }
        // Exclude
        board[row][col] = currentCharacter; // Backtrack
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) 
    {
        int row = board.size();
        int col = board[0].size();
        int wordIndex = 0;
        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<col ; j++)
            {
                if(board[i][j] == word[wordIndex])
                {
                    if(isWordExist(board , word , i , j , wordIndex))
                    {
                        return true;
                    }
                }  
            }
        }
        return false;    
    }
};
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

- Valid Sudoku
```c++
class Solution {
public:
    bool isDigitValid(vector<vector<char>>& board , int row , int col , char digit)
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

    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for(int i=0 ; i<9 ; i++)
        {
            for(int j=0 ; j<9 ; j++)
            {
                if(board[i][j] != '.')
                {
                    int row = i;
                    int col = j;
                    char digit = board[i][j];
                    board[i][j] = '.'; // Temporarily remove the digit
                    bool valid = isDigitValid(board , row , col , digit);
                    if(valid)
                    {
                        board[i][j] = digit; // Restore the digit
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
```





















---
