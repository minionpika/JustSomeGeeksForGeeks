#include <iostream>
#include <array>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, d, w, ti, dose=1, pack=1, t[200000];
        cin >> n >> k >> d >> w;
        for (int i=0; i<n; i++) cin >> t[i];

        ti = t[0]+w;
        for (int i=1; i<n; i++) {
            if (t[i]-ti > d || dose == k) {
                pack++; dose = 0; ti = t[i]+w;
            }
            dose++;
        }

        cout<< pack << endl;
    }
    return 0;
}