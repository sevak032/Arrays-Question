#include<iostream>
using namespace std;
int main (){
    int arr[]={21,54,65,78,12,95,21,55};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for (int i=0; i<n; i++){
        // if(arr[i]>mx) mx = arr[i];
        mx = max(mx,arr[i]);
    }
    cout<<mx;
}