#include <bits/stdc++.h>

int main(){
    using namespace std;

    int x,y,z,babak;

    cin>>x>>y>>z;

    babak = ((x+y+z) / 7)*4;

    cout<<(((x==babak) || (y==babak) || (z==babak)) ? "YA":"TIDAK")<<endl;

    return 0;
}