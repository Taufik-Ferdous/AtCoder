#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int arr[n][7];
    for(int i=0; i<n; i++){
        for(int j=0; j<7; j++){
            cin>>arr[i][j];
        }
    }

    long long int sum=0;
    for(int i=0; i<n; i++){
            for(int j=0; j<7; j++){
                sum += arr[i][j];
            }
            cout<<sum;
            if(i!= (n-1)) cout<<' ';
            sum=0;
        }
}