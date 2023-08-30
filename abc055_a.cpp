#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll a; cin>>a;
    ll p=(a*800);
    ll r=200*(a/15);
    cout<<(p-r) <<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}