#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d=0;
    cin>>a>>b>>c;

    for(int i=1;i<=c;i++){
        d+=(a*i);
    }

    if(b<=d){
        cout<<d-b<<endl;
    }else{
        cout<<0<<endl;
    }

    return 0;
}