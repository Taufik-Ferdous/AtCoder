#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int chk=0;
    int prev=-1, curr=-1;
    for(int i=0; i<8; i++){
        cin>>curr;
        if(i==0){
            prev = curr;
            if((curr>675 || curr<100) || (curr%25 != 0))
                chk=1;
        }
        else{
            if(prev>curr || (curr>675 || curr<100) || (curr%25 != 0))
                chk=1;
            prev=curr;
        }
    }
    if(chk==0) cout<<"Yes" <<endl;
    else cout<<"No" <<endl;
}