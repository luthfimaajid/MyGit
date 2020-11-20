#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x,y,z;
    cin>>n>>x>>y;
    for(int i=0; i<n; i++){
        cin>>z;
        if((z<=x)||(z<=y)||(z<=sqrt(pow(x,2)+pow(y,2)))){
            cout<<"DA"<<endl;
        }else{
            cout<<"NE"<<endl;
        }
    }
    return 0;
}