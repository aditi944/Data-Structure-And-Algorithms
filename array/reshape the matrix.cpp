 int m = mat.size();
        int n = mat[0].size();
        if(n*m != r*c)
            return mat;
        vector<vector<int>> res(r,vector<int> (c, 0));
        int r1=0;
        int c1=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(c1<n)
                {
                    res[i][j] = mat[r1][c1];
                }
                else
                {
                    r1++;
                    c1= 0;
                    res[i][j] = mat[r1][c1];
                }
                c1++;
            }
        }
        return res;
