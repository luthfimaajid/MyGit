#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int soda(int x, int y){
    if(x<y){
        return 0;
    } else{
        return x/y + soda( ((x/y)+(x%y)), y);
    }
}

int main(){
    using namespace std;

    int x,y,z;
    cin>>x>>y>>z;
    cout<<soda(x+y, z)<<endl;


    

    


    return 0;
}   