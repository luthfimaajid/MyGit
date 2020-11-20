#include <bits/stdc++.h>

int main(){
    using namespace std;

    long long n;
    cin>>n;
    long long a[n],b[n],j[n];

    for(int i = 0; i < n; i++){
        j[i]=0;
        cin>>a[i];
        cin>>b[i];  

        if(a[i]==b[i]){
            j[i]=0;
        }else if (a[i]>b[i]){
            while(a[i]>b[i]){
                a[i]=a[i]-10;
                j[i]++;
            }
        }else if(a[i]<b[i]){
            while(a[i]<b[i]){
                a[i]=a[i]+10;
                j[i]++;
            }
        }
    }

    for(int i = 0; i < n; i++){
      cout<<j[i]<<endl;
    }

    



    return 0;
}