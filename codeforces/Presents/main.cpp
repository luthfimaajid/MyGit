#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,d=0;
    cin>>a;
    int b[a];
    int c[a];

    for(int i= 0; i < a; i++){
        cin>>b[i];
        c[b[i]-1]=i+1;
    }


    for(int i= 0; i < a; i++){
        cout<<c[i]<<" ";
    }

    cout<<endl;


    return 0;
}