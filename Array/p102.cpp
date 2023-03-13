#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main()
{
    int B[3], G[3], C[3], m,idx;
    vector <pair<string, int> > ans;

    while (scanf("%d %d %d %d %d %d %d %d %d\n", &B[0], &G[0], &C[0], &B[1], &G[1], &C[1], &B[2], &G[2], &C[2]) != EOF)
    {
        //BCG
        ans.push_back(make_pair("BCG", C[0] + G[0] + B[1] + G[1] + B[2] + C[2]));
        //cout << "BCG" << b2+b3+g1+g2+c1+c3 << endl;
        //BGC
        ans.push_back(make_pair("BGC", C[0] + G[0] + B[1] + C[1] + B[2] + G[2]));
        //cout << "BGC" << b2+b3+g1+g3+c1+c2 << endl;
        //CBG
        ans.push_back(make_pair("CBG", B[0] + G[0] + C[1] + G[1] + B[2] + C[2]));
        //cout << "CBG" << b1+b3+g1+g2+c2+c3 << endl;
        //CGB
        ans.push_back(make_pair("CGB", B[0] + G[0] + B[1] + C[1] + G[2] + C[2]));
        //cout << "CGB" << b1+b2+g1+g3+c2+c3 << endl;
        //GBC
        ans.push_back(make_pair("GBC", C[0] + B[0] + C[1] + G[1] + B[2] + G[2]));
        //cout << "GBC" << b1+b3+g2+g3+c1+c2 << endl;
        //GCB
        ans.push_back(make_pair("GCB", C[0] + B[0] + B[1] + G[1] + G[2] + C[2]));
        //cout << "GCB" << b1+b2+g2+g3+c1+c3 << endl;

        m = ans[0].second; idx=0;
        for (int i=1; i<6; i++) {
            if (m > ans[i].second) {
                m = ans[i].second;
                idx=i;
            }
        }
        printf("%s %d\n", ans[idx].first.c_str(), m);
    }
}