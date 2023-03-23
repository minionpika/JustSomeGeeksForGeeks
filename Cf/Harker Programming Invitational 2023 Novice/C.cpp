#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n, k, x, s=0, trip=0, weightList[100001];
    cin >> n >> k;

    for (int i=0; i<n; i++) {
        cin >> weightList[i];
    }

    for (int i=0; i<n; i++) {
        s += weightList[i];
        if (s > k) { trip++; s=weightList[i]; }
        else if (s == k) { trip++; s=0; }
    }

    if (s!=0) trip++;
    cout << trip << endl;

    return 0;
}