#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll a; cin>>a;
    ll o=0, e=0;
    for(ll i=0; i<a; ++i){
        ll dum; cin>>dum;
        if(dum%2==1) o++;
    }
    if(o%2==1) cout<<"NO" <<endl;
    else cout<<"YES" <<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}