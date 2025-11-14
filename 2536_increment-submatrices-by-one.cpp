class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> ans(n,vector<int> (n,0));
        for(int i=0;i<queries.size();i++){
            int r1=queries[i][0];
            int r2=queries[i][2];
            int c1=queries[i][1];
            int c2=queries[i][3];
            for(int i=r1;i<=r2;i++){
                for(int j=c1;j<=c2;j++){
                    ans[i][j]+=1;
                }
            }
        }
        return ans;
        
    }
};
