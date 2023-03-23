#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, treeBlocks[201], a, b, c=0;
    cin >> n >> m;

    treeBlocks[0] = 0;
    
    for (int i=1; i<=n; i++)
        cin >> treeBlocks[i];
    
    for (int i=1; i<=n; i++)
        treeBlocks[i] += treeBlocks[i-1];
    
    for (int i=0; i<m; i++) {
        cin >> a >> b;
        c += treeBlocks[b] - treeBlocks[a-1];
    }

    cout << c << endl;

    return 0;
}