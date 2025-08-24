# BACKTRACKING
---

| BACKTRACKING |
| ------------ |
| Subsets |
| Letter Combinations of a Phone Number |
| Permutations |

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







---
