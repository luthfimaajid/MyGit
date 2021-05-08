#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,c;
    string b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        if (b.size()>10){
            cout<<b.substr(0,1)<<b.size()-2<<b.substr(b.size()-1,1)<<endl;
        } else{
            cout<<b<<endl;
        }
        
    }
    return 0;
}