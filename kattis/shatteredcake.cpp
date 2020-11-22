#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;

    int z, n, max=0, x, y;
    cin>>z>>n;

    for(int i=0; i<n; i++){
        cin>>x>>y;
        max+=(x*y);
    }

    cout<<max/z<<endl;
    

    


    return 0;
}   