#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x=0,y=0;
    string a,b;
    cin>>a;
    cin>>b;
    
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);

    if(a==b){
        cout<<0<<endl;
    }else {
        for(int i=0;i<a.size();i++){
            if(a[i]>b[i]){
                cout<<1<<endl;break;
            }else if(a[i]<b[i]){
                cout<<-1<<endl;break;
            }
        }
    }



    return 0;
}