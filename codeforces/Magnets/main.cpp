#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, count=0;
    cin>>a;
    int b[a];

    for(int i= 0; i < a; i++){
        cin>>b[i];
    }
    
    for(int i= 0; i < a; i++){
        if(b[i]!=b[i+1]){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}