#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n, x=-1,max=0;
    
    cin>>n;

    vector<int> a;
    
    for(int i=0; i<n; i++){
        x=-1;
        max=0;
        a.clear();
        while(x!=0){ 
            cin>>x;
            a.push_back(x);
        }

        for(int j=1;j<a.size();j++){
            if(a[j]>a[j-1]*2){
                max+=a[j]-a[j-1]*2;
            }
        }
        cout<<max<<endl;
    }
   


    return 0;
}