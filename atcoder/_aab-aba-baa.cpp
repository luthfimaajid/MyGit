#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)
#define MAXFACT 60

ll fact[MAXFACT];
void preFact()
{
    fact[0] = 1;
    for (int i = 1; i < MAXFACT; i++)
        fact[i] = fact[i - 1] * i;
}

void solve(){
    ll a,b,n;
    cin>>a>>b>>n;

    string abc;
    for(int i=0; i<a; i++){
        abc+='a';
    }
    for(int i=0; i<b; i++){
        abc+='b';
    }
// 
    //cout<<abc<<endl;
    // vector<string> cba;
    // sort(abc.begin(), abc.end());
   // do {
  //     cout<<abc<<endl;
 //       cba.push_back(abc);
//    } while(next_permutation(abc.begin(), abc.end()));
// 
    // for(ll i = 0; i<k-1; i++){
        // next_permutation(abc.begin(), abc.end());
    // }
// 
    // cout<<abc<<endl;

    preFact();

    char out[a+b];
    int sum = 0;
    int k = 0;
    char freq[2];
    freq[0] = a;
    freq[1] = b;

    while (sum != n) {
  
        sum = 0;
        // Check for characters present in freq[]
        for (int i = 0; i < 2; i++) {
            if (freq[i] == 0)
                continue;
  
            // Remove character
            freq[i]--;
  
            // Calculate sum after fixing
            // a particuar char
            int xsum = fact[(a+b) - 1 - k];
            for (int j = 0; j < 2; j++){
                // if(fact[freq[j]] == 0){
                    // continue;
                // }
                xsum /= fact[freq[j]];
            }
            sum += xsum;
  
            // if sum > n fix that char as
            // present char and update sum
            // and required nth after fixing
            // char at that position
            if (sum >= n) {
                out[k++] = i + 'a';
                n -= (sum - xsum);
                break;
            }
  
            // if sum < n, add character back
            if (sum < n)
                freq[i]++;
        }
    }

    for (int i = 2 - 1;
         k < (a+b) && i >= 0; i--)
        if (freq[i]) {
            out[k++] = i + 'a';
            freq[i++]--;
        }
  
    out[k] = '\0';
    cout << out<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    int n=1; 
    //cin>>n;

    for(auto i=0; i<n; i++){
        solve();
    }

    return 0;
}   