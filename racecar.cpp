#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool isPal(string x, string y){
    string nw = x+y;
    for(int i=0, j=nw.length()-1; i<nw.length()/2; i++, j--)
        if(nw[i] != nw[j]) return false;
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0; i<n; i++){
        string in;
        cin>>in;
        s.push_back(in);
    }
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(isPal(s[i],s[j])){
                c=1;
                break;
            }
            else if(isPal(s[j],s[i])){
                c=1;
                break;
            }
        }
        if(c==1) break;
    }

    if(c==0) cout<<"No" <<endl;
    else cout<<"Yes" <<endl;
}