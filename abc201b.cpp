#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

struct node{
    string name;
    long long int h;
};

int main(){
    int n;
    cin>>n;
    struct node arr[n];
    for(int i=0; i<n; i++) cin>>arr[i].name >>arr[i].h;
    long long int max=-1;
    int pos=-1;
    for(int i=0; i<n; i++)
        if(arr[i].h>max){
            max=arr[i].h;
            pos=i;
        }
    arr[pos].h=0;
    max=-1;
    pos=-1;
    for(int i=0; i<n; i++)
        if(arr[i].h>max){
            max=arr[i].h;
            pos=i;
        }
    
    cout<<arr[pos].name;
}