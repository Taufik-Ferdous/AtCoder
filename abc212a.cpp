#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int a, b;
    cin>>a >>b;
    if(a>0 && b==0) cout<<"Gold" <<endl;
    else if(a==0 && b>0) cout<<"Silver" <<endl;
    else cout<<"Alloy" <<endl;
}