#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1010;
int marc[MAXN][MAXN];

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void dfs(int i, int j) {
    marc[i][j] = 1;
    for(int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        
        if(ni < 1 || ni > n) continue;
        if(nj < 1 || nj > n) continue;
        
        if(marc[ni][nj] == 0) dfs(ni, nj);
    }
}
