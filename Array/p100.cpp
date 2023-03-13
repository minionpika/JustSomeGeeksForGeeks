#include<iostream>
using namespace std;

int p100(int i) {
    int c=1;
    while (i!=1) {
        if (i%2==0)
            i=i/2;
        else
            i=3*i+1;
        c++;
    }
    return c;
}

int main() {
    int m, n, mOriginal, nOriginal, _max, temp;
    while (scanf("%d %d\n",&m,&n)==2){
        mOriginal = m;
        nOriginal = n;

        /* swap if out of order */
        if (m > n){
            swap(m,n);
        }
        
        _max = p100(m);
        for(int i=m+1;i<=n;i++) {
            temp = p100(i);
            if (temp > _max)
            _max = temp;
        }
        printf("%d %d %d\n",mOriginal,nOriginal,_max);
    }
}