#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int e=0;
    string x;
    string y;
    cin>>x>>y;

    x = string(x.rbegin(),x.rend());
    y = string(y.rbegin(),y.rend());
    
    

    if(x>y){
        cout<<x<<endl;
    }else{
        cout<<y<<endl;
    }
 

    return 0;
}