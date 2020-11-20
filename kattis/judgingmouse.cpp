#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int n,x;
    cin>>n>>x;
    if((n==0)&&(x==0)){
        cout<<"Not a moose"<<endl;
    }else if(n==x){
        cout<<"Even "<<n+x<<endl;
    }else{
        if(n>x)
        cout<<"Odd "<<n*2<<endl;
        else cout<<"Odd "<<x*2<<endl;
    }
    

    return 0;
}   