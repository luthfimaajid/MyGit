#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,num;   
    unsigned long long int max=10000000000;
    vector<int> x;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>num;
        x.push_back(num);
        if(num<max)max=num;
    }

    for(int i=0; i<n; i++){
        if(max==x[i]){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}   