#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    string x;
    cin>>x;

    for (int i = 0; i<x.size() ;i++){
        if(x.substr(i,1)=="s"){
            if(x.substr(i+1,1)=="s"){
                cout<<"hiss"<<endl;
                return 0;
            }
        }

    }
    cout<<"no hiss"<<endl;

 

    return 0;
}