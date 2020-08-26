#include<iostream>
using namespace std;

int main(){
    int a,b,count=0;
    bool abc=true;
    cin>>a>>b;
    int c[a];

    for(int i = 0;i<a;i++){
        cin>>c[i];
    }
    
    for(int i = 0;i<a;i++){
        if ((c[i]>0)&&(c[i]>=c[b-1])){
            count++;
        }
    }

    
    cout<<count<<endl;
    return 0;
}