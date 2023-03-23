#include <iostream>

using namespace std;

int main()
{
    int n, m, h=0, v=0;
    char c;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> c >> m;
        if (c == 'h') h++;
        if (c == 'v') v++;
    }
    cout << h*v << endl;

    return 0;
}