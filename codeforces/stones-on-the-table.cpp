#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,c=0;cin>>a;
    string b;cin>>b;

    for(int i=0;i<a;i++){
        if(b[i]==b[i+1]){
            if(i+2>a){
                break;
            }
            c++;
        }
    }

    cout<<c<<endl;

    return 0;
}