#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if((x==1)||(x==0)){
            cout<<1<<endl;
        }else if(x==2){
            cout<<2<<endl;
        }else if(x==3){
            cout<<6<<endl;
        }else if(x==4){
            cout<<4<<endl;
        }else{
            cout<<0<<endl;
        }
    }

    return 0;
}   