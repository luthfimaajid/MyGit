#include<iostream>
using namespace std;

int main(){
    int a,x=0;
    string b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        for(int j=0;j<2;j++){
            if(b.substr(j,1)=="+"){
                x++;break;
            }else if(b.substr(j,1)=="-"){
                x--;break;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}