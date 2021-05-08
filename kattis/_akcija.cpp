#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    int n, x, max=0, min=0, minmax=0;

    cin>>n;
    vector<int> book;

    for(int i=0; i<n; i++){
        cin>>x;
        book.push_back(x);
        if((i+1)%3==0){
            min = book[i-2];
            for(int j=i; j>i-2; j--){
                if(book[j]<min){
                    min = book[j];
                }
            }
            minmax+=min;
        }
        max+=x;
    }

    //sort(book.begin(), book.end());
    
    

    cout<<max-minmax<<endl;



}

int main(){
    ios_base::sync_with_stdio(0);
   
    solve();
    
    return 0;
}   





































