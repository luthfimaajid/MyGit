#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159



int main(){
    using namespace std;

    int n, x, y, max;
    vector<int> t;
    vector<int> jrk;

    cin>>n;
    while(n!=-1){
        max=0;
        t.clear();
        jrk.clear();
        for(int i=0; i<n; i++){
            cin>>x>>y;
            jrk.push_back(x);
            t.push_back(y);
        }
        for(int i=n-1; i>0-1; i--){
            if(i==0){
                max+=jrk[i]*(t[i]);
                
            }else{
                max+=jrk[i]*(t[i]-t[i-1]);
            }
        }
        
        cout<<max<<" miles"<<endl;
        cin>>n;
        
    }


    

    


    return 0;
}   