// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
#include <list>
#include <map>
#include <queue>
using namespace std;

struct Graph {
  map<int, list<int> > adjlist;
  void add_edge(int src, int dest) { adjlist[src].push_back(dest); }
  bool checkTree(int n) {
    map<int, bool> visited;
    int count = 0;
    for (int i = 1; i <= n; i++) {
      visited[i] = false;
    }
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
      int node = q.front();
      visited[node] = true;
      q.pop();
      for (int neighbour : adjlist[node]) {
        if (visited[neighbour] == false) {
          q.push(neighbour);
        } else {
          return false;
        }
      }
      count++;
    }
    if (count == n) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  int n;
  cin >> n;
  int m;
  cin >> m;
  Graph g;
  for (int i = 0; i < m; i++) {
    int u;
    cin >> u;
    int v;
    cin >> v;
    g.add_edge(u, v);
  }
  if (m == n - 1 && g.checkTree(n)) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}