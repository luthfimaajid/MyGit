#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x,y,max=0;
    cin>>x>>n;
    for(int i=0; i<n; i++){
        cin>>y;
        max+=x-y;

    }

    cout<<max+x<<endl;

    return 0;
}