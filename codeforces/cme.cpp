#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned int a[n];

    for (int i = 0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
            a[i]=2;
        }else if (a[i]==1){
            a[i]=3;
        }else if ((a[i]%2)==1){
            a[i]=1;
        }else{
            a[i]=0;
        }
    }

    cout<<endl;

    for (int i = 0;i<n;i++){
        cout<<a[i]<<endl;
        
    }


    return 0;
}