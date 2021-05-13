#include <iostream>

using namespace std;

int main()
{
    int n=10,s=0,k=1;
    start:
    s+=k*k;
    if(k<n){
        k++;
        goto start;
    }
    cout<<n<<" "<<s;
    return 0;
}
