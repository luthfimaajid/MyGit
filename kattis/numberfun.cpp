#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n;
    float x,y,z;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y>>z;
        if(x+y==z){
            cout<<"Possible"<<endl;
        }else if((x-y==z)||(y-x==z)){
            cout<<"Possible"<<endl;
        }else if((x/y==z)||(y/x==z)){
            cout<<"Possible"<<endl;
        }else if(x*y==z){
            cout<<"Possible"<<endl;
        }else{
            cout<<"Impossible"<<endl;
        }
    }

    return 0;
}   