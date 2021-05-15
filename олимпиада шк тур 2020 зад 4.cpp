#include <iostream>
#include <cmath>
using namespace std;

    int main()
    {
    long long n, k, s, d, x, y ;
    cin>>n;
    k = sqrt(n);
    s = k * k;
    d = n - s;
    if(d==0)
    {
        if(k%2==0)
        {
            x = k;
            y=1;
        }
        else
        {
            x=1;
            y =k;
        }
        cout<<x<<" "<<y;
        return 0;
    }
    if(( k + 1 )%2==0)
    {
        if(d<=k+1)
        {
            y=k+1;
            x=d;
        }
        else
        {
            d = d-k-1;
            x = k+1;
            y = k+1-d;
        }
    }
    if((k+1)%2 != 0)
    {
        if(d<=k+1)
        {
            x=k+1;
            y=d;
        }
        else
        {
            y=k+1;
            d=d-k-1;
            x=k+1-d;
        }
    }

    cout<<x<<" "<<y;
    return 0;
    }
