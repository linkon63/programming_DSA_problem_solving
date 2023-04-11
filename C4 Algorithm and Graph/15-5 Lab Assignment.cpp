#include <bits/stdc++.h>
using namespace std;

const int N = 1005;

int n, m;
char a[N][N], p[N][N];
int dis[N][N];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
string ans;

bool check(int i, int j) {
    if (i < 1 || i > n || j < 1 || j > m) {
        return false;
    }
    if (a[i][j] == '#' || p[i][j] != '.') {
        return false;
    }
    return true;
}

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    memset(dis, -1, sizeof(dis));
    dis[x][y] = 0;
    q.push({x, y});

    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        if (i == 1 || i == n || j == 1 || j == m) {
            cout << "YES\n";
            cout << dis[i][j] << "\n" << ans;
            return;
        }

        for (int k = 0; k < 4; k++) {
            int ni = i + dx[k];
            int nj = j + dy[k];
            if (check(ni, nj)) {
                dis[ni][nj] = dis[i][j] + 1;
                p[ni][nj] = (k == 0 ? 'U' : (k == 1 ? 'D' : (k == 2 ? 'L' : 'R')));
                q.push({ni, nj});
            }
        }
    }

    cout << "NO\n";
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            p[i][j] = '.';
            if (a[i][j] == 'A') {
                bfs(i, j);
            }
        }
    }

    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//int n, m;
//char a[1005][1005], vis[1005][1005], path[1000005];
//int sx, sy, ex, ey, len;
//
//bool valid(int x, int y) {
//    return x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '.' && !vis[x][y];
//}
//
//bool dfs(int x, int y) {
//    if(x == ex && y == ey) return true;
//    vis[x][y] = 1;
//    if(valid(x, y+1)) {
//        path[len++] = 'R';
//        if(dfs(x, y+1)) return true;
//        len--;
//    }
//    if(valid(x+1, y)) {
//        path[len++] = 'D';
//        if(dfs(x+1, y)) return true;
//        len--;
//    }
//    if(valid(x, y-1)) {
//        path[len++] = 'L';
//        if(dfs(x, y-1)) return true;
//        len--;
//    }
//    if(valid(x-1, y)) {
//        path[len++] = 'U';
//        if(dfs(x-1, y)) return true;
//        len--;
//    }
//    return false;
//}
//
//int main() {
//    cin >> n >> m;
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++) {
//            cin >> a[i][j];
//            if(a[i][j] == 'A') sx = i, sy = j;
//            if(a[i][j] == '.' && (i == 0 || i == n-1 || j == 0 || j == m-1)) ex = i, ey = j;
//        }
//    }
//    if(dfs(sx, sy)) {
//        cout << "YES\n" << len << "\n" << path << "\n";
//    }
//    else cout << "NO\n";
//    return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> adj[100001];
//bool visited[100001];
//
//void dfs(int u) {
//    visited[u] = true;
//    for(int v : adj[u]) {
//        if(!visited[v]) {
//            dfs(v);
//        }
//    }
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    for(int i = 0; i < m; i++) {
//        int u, v;
//        cin >> u >> v;
//        adj[u].push_back(v);
//        adj[v].push_back(u);
//    }
//
//    dfs(1);
//
//    if(visited[n]) {
//        cout << "YES\n";
//    } else {
//        cout << "NO\n";
//    }
//
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int sum(int a[], int n) {
//    if(n == 1) {  // Base case: If there is only one element in the array
//        return a[0];
//    }
//    else {
//        return a[n-1] + sum(a, n-1);  // Recursive step: Add the last element to the sum of the rest of the array
//    }
//}
//
//int main() {
//    int n, a[100];
//    cin >> n;
//
//    // Reading the array
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//
//    // Calculating the sum of the array using recursion
//    int s = sum(a, n);
//
//    cout << s;
//
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> adj[10001];
//bool visited[10001];
//bool has_cycle;
//
//void dfs(int u, int parent) {
//    visited[u] = true;
//
//    for(int v : adj[u]) {
//        if(!visited[v]) {
//            dfs(v, u);
//        }
//        else if(v != parent) {  // If v is not the parent of u, then there is a cycle
//            has_cycle = true;
//            return;
//        }
//    }
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    // Reading edges of the graph
//    for(int i = 1; i <= m; i++) {
//        int u, v;
//        cin >> u >> v;
//
//        // Adding edges to the adjacency list
//        adj[u].push_back(v);
//        adj[v].push_back(u);
//    }
//
//    // Running DFS on each unvisited node of the graph
//    for(int i = 1; i <= n; i++) {
//        if(!visited[i]) {
//            dfs(i, -1);  // Parent of the first node is set to -1
//        }
//    }
//
//    // Checking if there is a cycle in the graph
//    if(has_cycle) {
//        cout << "Cycle Exists";
//    }
//    else {
//        cout << "No Cycle";
//    }
//
//    return 0;
//}
