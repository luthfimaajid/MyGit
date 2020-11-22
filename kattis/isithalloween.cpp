#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    string str;
    int x;

    getline(cin, str);
    x=stoi(str.substr(4,2));
    if((str.substr(0,3)=="OCT")&&(x==31)){
        cout<<"yup"<<endl;
        
    }else if((x==25)&&(str.substr(0,3)=="DEC")){
        cout<<"yup  "<<endl;
    }else{
        cout<<"nope"<<endl;
    }


    return 0;
}   