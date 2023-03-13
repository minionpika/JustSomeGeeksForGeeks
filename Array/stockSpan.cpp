#include<iostream>
#include<array>
using namespace std;

void calculateSpan(int arr[], int n) {
    cout << "enter" << endl;
    int ans[n], i, j;
    ans[0] = 1;

    for (i=1; i<n; i++) {
        //cout << i << endl;
        if (arr[i] > arr[i-1]) {
            j=i;
            ans[i] = ans[i-1] + 1;
            while (j>0) {
                j = (j-1) - ans[j-1];
                if (j>=0 && arr[i] > arr[j]) ans[i] = ans[i] + ans[j];
            }
        }
        else
            ans[i] = 1;
    }
    for (i=0; i<n; i++) {
        cout << ans[i] << " ";
    } cout << endl;
}

int main() {
    int price[] = { 100, 80, 60, 70, 60, 75, 85 };
    int n = sizeof(price) / sizeof(price[0]);

    calculateSpan(price, n);
 
    return 0;
}