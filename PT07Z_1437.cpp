// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <iostream>
#include <list>
#include <map>
#include <queue>
using namespace std;
 
class Graph {
  map<int, list<int> > adjList;
 
 public:
 void printgraph(){
   for(map<int, list<int> >::iterator i = adjList.begin(); i!=adjList.end(); i++){
     cout << i->first << ": ";
     for(list<int>::iterator j = i->second.begin(); j!=i->second.end(); j++){
       cout << *j << ", ";
     }
     cout << endl;
   }
 }
  void addEdge(int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  int bfs(int src) {
    queue<int> q;
    map<int, bool> visited;
    q.push(src);
    int temp;
    while (!q.empty()) {
      temp = q.front();
      q.pop();
      visited[temp] = true;
      for (int neighbour : adjList[temp]) {
        if (!visited[neighbour]) {
          q.push(neighbour);
          //visited[neighbour];
        }
      }
    }
    // returns farthest node
    return temp;
  }
  int dfs(int node, map<int, bool> &visited) {
    visited[node] = true;
    int sum = 0;
    for (int neighbour : adjList[node]) {
      if (!visited[neighbour]) {
        sum = max(sum, dfs(neighbour, visited));
      }
    }
    return sum + 1;
  }
  int dist(int src) {
    map<int, bool> visited;
    return dfs(src, visited);
  }
};
 
int getAns(Graph g) {
  int farthestNode = g.bfs(1);
  return g.dist(farthestNode) - 1;
}
 
int main() {
  int n;
  cin >> n;
  Graph g;
  int u;
  int v;
  for (int i = 0; i <= n - 1; i++) {
    cin >> u;
    cin >> v;
    g.addEdge(u, v);
  }
  cout << getAns(g);
  return 0;
}