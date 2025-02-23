# GRAPH

### Adjacency Matrix

### Un-Directed & Un-Weighted Graph Using Adjacency Matrix
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // UN-DIRECTED & UN-WEIGHTED GRAPH USING ADJACENCY MATRIX

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<vector<bool>> Adj_Matrix(vertex , vector<bool>(vertex , 0));

    int u, v;
    cout << "U" << " " << "V" << endl;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v;
        Adj_Matrix[u][v] = 1;
        Adj_Matrix[v][u] = 1;
    }

    cout << "Un-Directed & Un-Weighted Graph Using Adjacency Matrix" << endl;
    for(int i=0 ; i<vertex ; i++)
    {
        for(int j=0 ; j<vertex ; j++)
        {
            cout << Adj_Matrix[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
```

### Un-Directed & Weighted Graph Using Adjacency Matrix
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // UN-DIRECTED & WEIGHTED GRAPH USING ADJACENCY MATRIX

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<vector<int>> Adj_Matrix(vertex , vector<int>(vertex , 0));

    int u, v, weight;
    cout << "U" << " " << "V" << " " << "W" << endl;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v >> weight;
        Adj_Matrix[u][v] = weight;
        Adj_Matrix[v][u] = weight;
    }

    cout << "Un-Directed & Weighted Graph Using Adjacency Matrix" << endl;
    for(int i=0 ; i<vertex ; i++)
    {
        for(int j=0 ; j<vertex ; j++)
        {
            cout << Adj_Matrix[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
```

### Directed & Un-Weighted Graph Using Adjacency Matrix
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // DIRECTED & UN-WEIGHTED GRAPH USING ADJACENCY MATRIX

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<vector<bool>> Adj_Matrix(vertex , vector<bool>(vertex , 0));

    int u, v;
    cout << "U" << " " << "V" << endl;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v;
        Adj_Matrix[u][v] = 1;
    }

    cout << "Directed & Un-Weighted Graph Using Adjacency Matrix" << endl;
    for(int i=0 ; i<vertex ; i++)
    {
        for(int j=0 ; j<vertex ; j++)
        {
            cout << Adj_Matrix[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
```

### Directed & Weighted Graph Using Adjacency Matrix
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // DIRECTED & WEIGHTED GRAPH USING ADJACENCY MATRIX

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<vector<int>> Adj_Matrix(vertex , vector<int>(vertex , 0));

    int u, v, weight;
    cout << "U" << " " << "V" << " " << "W" << endl;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v >> weight;
        Adj_Matrix[u][v] = weight;
    }

    cout << "Directed & Weighted Graph Using Adjacency Matrix" << endl;
    for(int i=0 ; i<vertex ; i++)
    {
        for(int j=0 ; j<vertex ; j++)
        {
            cout << Adj_Matrix[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
```

### Adjacency List

### Un-Directed & Un-Weighted Graph Using Adjacency List
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // UN-DIRECTED & UN-WEIGHTED GRAPH USING ADJACENCY LIST

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<int> Adj_List[vertex];

    int u, v;
    cout << "U" << " " << "V" << endl;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v;
        Adj_List[u].push_back(v);
        Adj_List[v].push_back(u);
    }

    cout << "Un-Directed & Un-Weighted Graph Using Adjacency List" << endl;
    for(int i=0 ; i<vertex ; i++)
    {
        cout << i << " -> ";
        for(int j=0 ; j<Adj_List[i].size() ; j++)
        {
            cout << Adj_List[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
```

### Un-Directed & Weighted Graph Using Adjacency List
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // UN-DIRECTED & WEIGHTED GRAPH USING ADJACENCY LIST

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<pair<int , int>> Adj_List[vertex];

    int u, v, weight;
    cout << "U" << " " << "V" << " " << "W" << endl;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v >> weight;
        Adj_List[u].push_back(make_pair(v , weight));
        Adj_List[v].push_back(make_pair(u , weight));
    }

    cout << "Un-Directed & Weighted Graph Using Adjacency List" << endl;
    for(int i=0 ; i<vertex ; i++)
    {
        cout << i << " -> ";
        for(int j=0 ; j<Adj_List[i].size() ; j++)
        {
            cout << Adj_List[i][j].first << "  " << Adj_List[i][j].second << "  ";
        }
        cout << endl;
    }

    return 0;
}
```

### Questions

- BFS of Graph
```c++
class Solution {
public:
    vector<int> bfsOfGraph(vector<vector<int>> &adj) 
    {
        queue<int> q;
        q.push(0);
        
        vector<bool> visited(adj.size() , 0);
        visited[0] = 1;
        
        vector<int> ans;
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            for(int j=0 ; j<adj[temp].size() ; j++)
            {
                if(!visited[adj[temp][j]])
                {
                    visited[adj[temp][j]] = 1;
                    q.push(adj[temp][j]);
                }
            }
        }
        return ans;
    }
};
```

- DFS of Graph
```c++

```

- Detect Cycle using DSU
```c++
class Solution{
public:
    bool detectCycleDFS(int node , int parent , vector<int>adj[] , vector<bool>&visited)
    {
        visited[node] = 1;
        for(int j=0 ; j<adj[node].size() ; j++)
        {
            if(adj[node][j] == parent)
            {
                continue;
            }
            if(visited[adj[node][j]])
            {
                return true;
            }
            if(detectCycleDFS(adj[node][j] , node , adj , visited))
            {
                return true;
            }
        }
        return false;
    }
    
	int detectCycle(int V, vector<int>adj[])
	{
	    vector<bool> visited(V , 0);
	    for(int i=0 ; i<V ; i++)
	    {
	        if(!visited[i] && detectCycleDFS(i , -1 , adj , visited))
	        {
	            return 1;
	        }
	    }
	    return 0;
    }
};
```

```c++
class Solution{
public:
    bool detectCycleBFS(int vertex , vector<int>adj[] , vector<bool>&visited)
    {
        visited[vertex] = 1;
        queue<pair<int , int>> q;
        q.push(make_pair(vertex , -1));
        while(!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(int j=0 ; j<adj[node].size() ; j++)
            {
                if(adj[node][j] == parent)
                {
                    continue;
                }
                if(visited[adj[node][j]])
                {
                    return true;
                }
                visited[adj[node][j]] = 1;
                q.push(make_pair(adj[node][j] , node));
            }
        }
        return false;
    }
    
	int detectCycle(int V, vector<int>adj[])
	{
	    vector<bool> visited(V , 0);
	    for(int i=0 ; i<V ; i++)
	    {
	        if(!visited[i] && detectCycleBFS(i , adj , visited))
	        {
	            return 1;
	        }
	    }
	    return 0;
    }
};
```


---
