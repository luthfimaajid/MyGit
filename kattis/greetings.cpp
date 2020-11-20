#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int e=0;
    string x;
    cin>>x;

    for (int i = 0; i<x.size() ;i++){
        if(x.substr(i,1)=="e"){
                e++;  
        }

    }
    cout<<"h";
    for (int i = 0; i<e*2 ;i++){
        cout<<"e";

    }
    cout<<"y\n";

 

    return 0;
}