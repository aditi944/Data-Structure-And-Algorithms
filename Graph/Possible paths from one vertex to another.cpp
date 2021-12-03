class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        int count=0;
        vector<int>visited(V+1,false);
        for(int i=0;i<V;i++){
            if(i==source){
                visited[source]=true;
                dfs(source,adj, destination, count, visited);
                
            }
        }
        return count;// Code here
    }
    
    void dfs(int node, vector<int> adj[], int destination, int&count, vector<int>&visited){
        if(node==destination){
            count++;
            visited[node]=false;
            return;
            
        }
        vector<int>v=adj[node];
        for(int neigh:v){
            if(visited[neigh]==false){
                visited[neigh]=true;
                dfs(neigh,adj, destination, count, visited);
            }
        }
        visited[node]=false;
    }
};