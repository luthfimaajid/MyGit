#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x,num,uniq=0;
    vector<int> a;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;
        a.clear();
        for(int j=0; j<x; j++){
            cin>>num;
            a.push_back(num);
            
            
        }
        for(int j=0; j<x; j++){
            for(int k=x-1; k>j; k--){
                if(a[j]==a[k]){
                    a[j]=-1;
                    a[k]=-1;
                }
            }
                
        }
        for(int j=0; j<x; j++){
            if(a[j]!=-1){
                printf("Case #%d: %d\n", i+1, a[j]);
                break;
            }
        }
        
    }

    return 0;
}