#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct c{
int x;
int y;
};
    bool sord(pair<int, int > a, pair<int, int > b ){
    return b.second>a.second;
    }


    int main(){
        pair<int , int > p;
        int n,y,x;
        cin>>n;
        vector<pair<int, int>> a;
        vector<pair<int, int>> b;
        for(int i = 0; i<n; i++){
            cin>>p.first ;
            p.second = i+1;
            a.push_back(p);
        }

        for(int i = 0; i<n; i++){
        p.first = n-a[i].second + 1;
        p.second= a[i].first;
        b.push_back(p);
        /*y = a[i].second;
        x = a[i].first;
        b[i].first = n - y +1;
        b[i].second = x;*/
        }

        sort(b.begin(),b.end(),sord);
        for (int i=0; i<n; i++)
        cout<<b[i].first<<" " /*<<b[i].second*/<<endl;
        return 0;
    }
