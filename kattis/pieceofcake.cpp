#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x,y,h,v;
    cin>>n>>x>>y;

    if(x > n-x){
        h=x;
    }else{
        h=n-x;
    }
    if(y > n-y){
        v=y;
    }else{
        v=n-y;
    }

    cout<<h*v*4;

 

    return 0;
}