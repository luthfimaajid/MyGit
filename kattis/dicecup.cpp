#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int x,y;
    cin>>x>>y;
    if(x>y){
        for(int i=y; i<=x; i++){
            cout<<i+1<<endl;
        }
    }else{
        for(int i=x; i<=y; i++){
            cout<<i+1<<endl;
        }            
        
    }


    return 0;
}   