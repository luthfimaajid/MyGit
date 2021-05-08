#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,count=0;

    cin>>a;
    for(int i= 0; i < a; i++){
        cin>>b>>c;
        if(b+2<=c){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}