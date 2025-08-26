#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
vector<int> grafo[MAXN];
int marc[MAXN], sub[MAXN], pai[MAXN], nivel[MAXN];

void dfs(int v) {
    marc[v] = 1;
    sub[v] = 1; //esse 1 serve para contabilizar o proprio v
    for(int i = 0; i < grafo[v].size(); i++) {
        int viz = grafo[v][i];
        if(marc[viz] == 0) {
            // nesse momento acabamos de descobrir que viz eh filho de v
            pai[viz] = v;
            nivel[viz] = nivel[v] + 1;
            dfs(viz);
            
            sub[v] += sub[viz];
        }
    }
}

int main() {
    int n; scanf("%d", &n);
    for(int i = 1; i <= n - 1; i++) {
        int a, b; scanf("%d %d", &a, &b);
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    
    pai[1] = 1;
    nivel[1] = 0;
    dfs(1);
    
    for(int i = 1; i <= n; i++) {
        printf("%d-> pai: %d  nivel: %d  sub: %d\n", i, pai[i], nivel[i], sub[i]);
    }
    
    return 0;
}
