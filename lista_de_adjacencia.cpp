#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
vector<int> grafo[MAXN];

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; i++) {
        int a, b; scanf("%d %d", &a, &b);
        grafo[a].push_back(b); //inserindo o b no final da lista de adjacencias do a
        grafo[b].push_back(a); //inserindo o a no final da lista de adjacencias do b
    }
    
    for(int i = 1; i <= n; i++) {
        printf("grau de %d eh %d, seus vizinhos sao: ", i, grafo[i].size());
        for(int j = 0; j < grafo[i].size(); j++) printf(" %d", grafo[i][j]);
        printf("\n");
    }
    return 0;
}
