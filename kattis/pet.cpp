#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int a,b,c,d, max=0,x;
    string res;

    for(int i=0; i<5;i++){
        
        cin>>a>>b>>c>>d;
        x=a+b+c+d;

        if(x>max){
            max=x;
            res=to_string(i+1)+ " "+to_string(max);
        }
    }

    cout<<res<<endl;
    return 0;
}   