#include<bits/stdc++.h>
using namespace std;

int main(){
    int count= 0;
    string a;
    cin>>a;
    
    for(int i=0;i<a.size()-1;i++){
        for(int j=i;j<a.size()-1;j++){
            if(a[i]==a[j+1]){
                count++;break;
            }
        }
    }
    
    count=a.size()-count;

    if(count % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}