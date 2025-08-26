#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
vector<int> grafo[MAXN];
int marc[MAXN];
int tamComp;

void dfs(int v) {
    tamComp++;
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
    
    int nComp = 0;
    int maxTamComp = 0;
    for(int i = 1; i <= n; i++) {
        if(marc[i] == 0) {
            nComp++;
            tamComp = 0;
            dfs(i);
            maxTamComp = max(maxTamComp, tamComp);
        }
    }
    
    printf("numero de componentes:%d tamanho maximo de uma componente: %d", nComp, maxTamComp);
    return 0;
}
