class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int ascii1 = 0;
        int ascii2 = 0;
        for(char c:s1) ascii1+=c;
        for(char c: s2) ascii2+=c;

        int m = s1.size();
        int n = s2.size();
        int t[m+1][n+1];
        for(int i=0; i<=m; i++) t[i][0] = 0;
        for(int j=0; j<=n; j++) t[0][j] = 0;

        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(s1[i-1]==s2[j-1]) t[i][j] = s1[i-1]+t[i-1][j-1];
                else t[i][j] = max(t[i][j-1], t[i-1][j]);
            }
        }
        //int as = 0;
        //for(int c: t[m][n]) as+=c;

        return ascii1+ascii2 - 2*t[m][n];
    }
};