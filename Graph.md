# GRAPH

### Un-Directed & Un-Weighted Graph
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // UN-DIRECTED & UN-WEIGHTED GRAPH

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<vector<bool>> Adj_Matrix(vertex , vector<bool>(vertex , 0));

    int u, v;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v;
        Adj_Matrix[u][v] = 1;
        Adj_Matrix[v][u] = 1;
    }

    cout << "Un-Directed & Un-Weighted Graph" << endl;
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

### Un-Directed & Weighted Graph
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // UN-DIRECTED & WEIGHTED GRAPH

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<vector<int>> Adj_Matrix(vertex , vector<int>(vertex , 0));

    int u, v, weight;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v >> weight;
        Adj_Matrix[u][v] = weight;
        Adj_Matrix[v][u] = weight;
    }

    cout << "Un-Directed & Weighted Graph" << endl;
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

### Directed & Un-Weighted Graph
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // DIRECTED & UN-WEIGHTED GRAPH

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<vector<bool>> Adj_Matrix(vertex , vector<bool>(vertex , 0));

    int u, v;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v;
        Adj_Matrix[u][v] = 1;
    }

    cout << "Directed & Un-Weighted Graph" << endl;
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

### Directed & Weighted Graph
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // DIRECTED & WEIGHTED GRAPH

    int vertex, edges;
    cout << "Vertex : ";
    cin >> vertex;
    cout << "Edges : ";
    cin >> edges;

    vector<vector<int>> Adj_Matrix(vertex , vector<int>(vertex , 0));

    int u, v, weight;
    for(int i=0 ; i<edges ; i++)
    {
        cin >> u >> v >> weight;
        Adj_Matrix[u][v] = weight;
    }

    cout << "Directed & Weighted Graph" << endl;
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

---
