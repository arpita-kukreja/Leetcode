class Solution {
public:
    void dfs(int i,vector<int>& vis,vector<int>adj[]){
        vis[i]=1;
        for(int at:adj[i]){
            if(!vis[at]){
                dfs(at,vis, adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m=isConnected.size();
        vector<int> adj[m];
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int cnt=0;
        vector<int> vis(m,0);
        for(int i=0;i<m;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,adj);
            }
        }
        return cnt;
    }
};
