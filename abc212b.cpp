#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[4];

    arr[3]=(a%10);
    a=a/10;
    arr[2]=(a%10);
    a=a/10;
    arr[1]=(a%10);
    a=a/10;
    arr[0]=(a%10);

    int c=0;
    if(arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3])cout<<"Weak" <<endl;
    else{
        for(int i=0; i<3; i++){
            if(arr[i]==9 && arr[i+1]!=0){
                c=1;
                cout<<"Strong" <<endl;
                break;
            }
            else if(arr[i]==9 && arr[i+1]==0) continue;
            else if(arr[i]+1 != arr[i+1]){
                c=1;
                cout<<"Strong" <<endl;
                break;
            }
        }
        if(c==0) cout<<"Weak" <<endl;
    }
}