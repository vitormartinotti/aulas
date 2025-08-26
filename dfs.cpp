#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
vector<int> grafo[MAXN];
int marc[MAXN];

void dfs(int v) {
    marc[v] = 1;
    for(int i = 0; i < grafo[v].size(); i++) {
        int viz = grafo[v][i];
        if(marc[viz] == 0) {
            dfs(viz);
        }
    }
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; i++) {
        int a, b; scanf("%d %d", &a, &b);
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    
    dfs(1);
    
    for(int i = 1; i <= n; i++) {
        printf("marc[%d] = %d\n", i, marc[i]);
    }

    return 0;
}
