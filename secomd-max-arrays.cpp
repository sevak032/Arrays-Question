#include<iostream>
using namespace std;
int main (){

    int arr[]={2,5,6,9,8,7,46,52};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for(int i=0; i<n; i++){
        mx = max(mx,arr[i]);

    }

    int smx = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]!=mx) smx = max(smx,arr[i]);
    }

    cout<<smx;
}