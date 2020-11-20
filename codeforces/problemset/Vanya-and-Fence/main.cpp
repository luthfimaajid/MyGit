#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, c, count=0;
    cin>>a>>c;
    int b[a];

    for(int i= 0; i < a; i++){
        cin>>b[i];
        if(b[i]>c){
            count+=2;
        }else{
            count++;
        }
    }

    cout<<count<<endl;


    return 0;
}