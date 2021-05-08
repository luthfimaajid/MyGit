#include<bits/stdc++.h>

using namespace std;

int main(){
    int lowcount=0, upcount=0;
    string abc, a, b;
    cin>>abc;

    for(int i=0; i<abc.length();i++){
        if(isupper(abc[i])){
            upcount++;
        }else{
            lowcount++;
        }
        a+=toupper(abc[i]);
        b+=tolower(abc[i]);
    }

    if(upcount>lowcount){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }

    return 0;
}