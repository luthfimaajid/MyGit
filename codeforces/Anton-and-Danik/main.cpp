#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, ac=0, dc=0;
    string abc;

    cin>>a>>abc;

    for(int i= 0; i < a; i++){
        switch (abc[i]){
            case 'A': ac++;break;
            case 'D': dc++;break;
            default : break;
        }
    }

    if(ac>dc){
        cout<<"Anton"<<endl;
    }else if (ac<dc){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}