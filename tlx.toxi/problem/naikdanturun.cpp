#include <bits/stdc++.h>

int main(){
    using namespace std;

    int N, Q, T, X, Y, max=0;

    cin>>N>>Q;

    int nilai[N];

    for(int i = 0; i < N; i++){
        nilai[i]=0;
    }

    for(int i = 0; i < Q; i++){
        cin>>T>>X>>Y;
        if(T==1){
            for(int j = 0; j < X; j++){
                nilai[j]+=Y;
                //cout<<"nilai "<<j<<": "<<nilai[j]<<endl;
            }
        }else if(T==2){
            for(int j = N-1; j >= X; j--){
                nilai[j]-=Y;
               // cout<<"nilai "<<j<<": "<<nilai[j]<<endl;
            }
        }
    }

    for(int i = 0; i < N; i++){
        if(nilai[i]<0){
            nilai[i]*=-1;
        }

        if(max<nilai[i]) max = nilai[i];

    }

    cout<<max<<endl;

    return 0;
}