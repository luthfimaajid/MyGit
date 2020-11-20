#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int n, x=0, y;
    cin>>n;
    y=n-1;

    do{
        x=0;
        y++;
        n=y;
        while(n!=0){
            x+=n%10;
            n/=10;
        }


        
    }while(y%x!=0);
    
    cout<<y<<endl;



    return 0;
}   