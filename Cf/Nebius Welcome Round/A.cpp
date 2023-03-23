#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int tc, a, b;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b;
        a=abs(a);
        b=abs(b);
        if (a==b) cout << a+b << endl;
        else cout << 2*max(a,b)-1 << endl;
    }
    return 0;
}