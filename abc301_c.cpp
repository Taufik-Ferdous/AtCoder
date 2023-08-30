/**
 *    Author: lulu (Tasmir_)
 *    Created:  27-August-2023  11:14:04
**/
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long 

#define fo(i,n) for(ll i=0; i<n; ++i)
#define Fo(i,k,n) for(ll i=k;k<n?i<n:i>=n;i<n?++i:--i)
#define deb(x) cout<<#x <<"=" <<x <<endl
#define deb2(x,y) cout<<#x <<"=" <<x <<" " <<#y <<"=" <<y <<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define endl "\n"

typedef pair<ll,ll>      pl;
typedef vector<ll>       vl;

const int mod = 1e9+7;
const ll N = 1e7+10;
//====================================

void solve(){
    string a, b; cin>>a >>b;
    vl v1(26);
    vl v2(26);
    ll p1=0, p2=0;
    ll len=a.size();

    fo(i,len){
        if(a[i]=='@') p1++;
        else v1[a[i]-'a']++;
    }
    fo(i,len){
        if(b[i]=='@') p2++;
        else v2[b[i]-'a']++;
    }

    fo(i,26){
        ll m=min(v1[i],v2[i]);
        v1[i]-=m;
        v2[i]-=m;
    }

    fo(i,26){
        if(v1[i]!=v2[i]){
            if(i+'a'!='a' && i+'a'!='t' && i+'a'!='c' && i+'a'!='o'
            && i+'a'!='d' && i+'a'!='e' && i+'a'!='r'){
                cout<<"No" <<endl;
                return;
            }
            else{
                if(v1[i]>v2[i]) p2-=v1[i]-v2[i];
                else p1-=v2[i]-v1[i];
            }
        }
    }
    if(p1<0 || p2<0) cout<<"No" <<endl;
    else cout<<"Yes" <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        solve();
}