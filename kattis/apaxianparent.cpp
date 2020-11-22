#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    string x, y;
    cin>>x>>y;

    if(x.substr(x.size()-1, 1)=="e"){
        cout<<x<<"x"<<y<<endl;
    }else if(x.substr(x.size()-2, 2)=="ex"){
        cout<<x<<y<<endl;
    }else if((x.substr(x.size()-1, 1)=="a")||(x.substr(x.size()-1, 1)=="i")||(x.substr(x.size()-1, 1)=="o")||(x.substr(x.size()-1, 1)=="u")){
        cout<<x.substr(0, x.size()-1)<<"ex"<<y<<endl;
    }else{
        cout<<x<<"ex"<<y<<endl;
    }

    


    return 0;
}   