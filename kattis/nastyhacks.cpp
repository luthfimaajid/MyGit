#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x,y,z;
    cin>>n;

    for (int i =0; i<n;i++){
        cin>>x>>y>>z;
        if(y-z>x){
            cout<<"advertise"<<endl;
        }else if(y-z<x){
            cout<<"do not advertise"<<endl;
        }else{
            cout<<"does not matter"<<endl;
        }

    }

 

    return 0;
}