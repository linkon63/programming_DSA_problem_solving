#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& adj_list, vector<bool>& visited, int u) {
    visited[u] = true;

    for (int v : adj_list[u]) {
        if (!visited[v]) {
            dfs(adj_list, visited, v);
        }
    }
}

int countComponents(vector<vector<int>>& adj_list, int n) {
    int count = 0;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(adj_list, visited, i);
            count++;
        }
    }

    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Creating the adjacency list
    vector<vector<int>> adj_list(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u); // Add both edges since the graph is undirected
    }

    int components = countComponents(adj_list, n);
    cout << components << endl;

    return 0;
}

//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//bool isBipartite(vector<vector<int>>& adj_list, int n) {
//    vector<int> color(n, -1); // -1 indicates uncolored, 0 and 1 represent two different colors
//    queue<int> q;
//
//    for (int i = 0; i < n; ++i) {
//        if (color[i] == -1) {
//            color[i] = 0;
//            q.push(i);
//
//            while (!q.empty()) {
//                int u = q.front();
//                q.pop();
//
//                for (int v : adj_list[u]) {
//                    if (color[v] == -1) {
//                        color[v] = 1 - color[u];
//                        q.push(v);
//                    } else if (color[v] == color[u]) {
//                        return false; // nodes u and v have the same color, so the graph is not bipartite
//                    }
//                }
//            }
//        }
//    }
//
//    return true;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    // Creating the adjacency list
//    vector<vector<int>> adj_list(n);
//    for (int i = 0; i < m; i++) {
//        int u, v;
//        cin >> u >> v;
//        adj_list[u].push_back(v);
//        adj_list[v].push_back(u); // Add both edges since the graph is undirected
//    }
//
//    if (isBipartite(adj_list, n)) {
//        cout << "YES" << endl;
//    } else {
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//bool isCyclicUtil(int v, vector<vector<int>>& adj_list, vector<bool>& visited, vector<bool>& recStack) {
//    visited[v] = true;
//    recStack[v] = true;
//
//    for (int i = 0; i < adj_list[v].size(); ++i) {
//        int adj_node = adj_list[v][i];
//        if (!visited[adj_node] && isCyclicUtil(adj_node, adj_list, visited, recStack)) {
//            return true;
//        } else if (recStack[adj_node]) {
//            return true;
//        }
//    }
//
//    recStack[v] = false;
//    return false;
//}
//
//bool isCyclic(vector<vector<int>>& adj_list, int n) {
//    vector<bool> visited(n, false);
//    vector<bool> recStack(n, false);
//
//    for (int i = 0; i < n; ++i) {
//        if (!visited[i]) {
//            if (isCyclicUtil(i, adj_list, visited, recStack)) {
//                return true;
//            }
//        }
//    }
//
//    return false;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    // Creating the adjacency list
//    vector<vector<int>> adj_list(n);
//    for (int i = 0; i < m; i++) {
//        int u, v;
//        cin >> u >> v;
//        adj_list[u].push_back(v);
//    }
//
//    if (isCyclic(adj_list, n)) {
//        cout << "YES" << endl;
//    } else {
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <queue>
///*
//6
//0 1 0 1 1 0
//1 0 1 0 0 1
//1 0 0 0 0 0
//1 0 0 0 0 1
//1 0 0 0 1 0
//1 0 0 0 1 0
// */
//using namespace std;
//
//void bfs(vector<vector<int>>& adj_list, vector<int>& levels, int start_node) {
//    // Mark all nodes as not visited
//    vector<bool> visited(adj_list.size(), false);
//
//    // Create a queue for BFS
//    queue<int> q;
//
//    // Mark the starting node as visited and enqueue it
//    visited[start_node] = true;
//    q.push(start_node);
//    levels[start_node] = 0;
//
//    // BFS loop
//    while (!q.empty()) {
//        // Dequeue a vertex from queue and print it
//        int current_node = q.front();
//        q.pop();
//
//        // Get all adjacent vertices of the dequeued vertex current_node
//        for (int i = 0; i < adj_list[current_node].size(); i++) {
//            int adjacent_node = adj_list[current_node][i];
//            // If the adjacent node is not visited, then mark it visited and enqueue it
//            if (!visited[adjacent_node]) {
//                visited[adjacent_node] = true;
//                q.push(adjacent_node);
//                levels[adjacent_node] = levels[current_node] + 1;
//            }
//        }
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    // Creating the adjacency list
//    vector<vector<int>> adj_list(n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            int weight;
//            cin >> weight;
//            if (weight == 1) {
//                adj_list[i].push_back(j);
//            }
//        }
//    }
//
//    // Finding the shortest path using BFS
//    vector<int> levels(n, -1);
//    bfs(adj_list, levels, 0);
//
//    // Printing the shortest path levels
//    for (int i = 0; i < n; i++) {
//        cout << "node " << i << " -> level: " << levels[i] << endl;
//    }
//
//    return 0;
//}
//

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    // Creating the adjacency matrix
//    vector<vector<int>> adj_matrix(n, vector<int>(n));
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> adj_matrix[i][j];
//        }
//    }
//
//    // Creating the adjacency list
//    vector<vector<int>> adj_list(n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (adj_matrix[i][j] == 1) {
//                adj_list[i].push_back(j);
//            }
//        }
//    }
//
//    // Printing the adjacency list
//    for (int i = 0; i < n; i++) {
//        cout << i << ": ";
//        for (int j = 0; j < adj_list[i].size(); j++) {
//            cout << adj_list[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
