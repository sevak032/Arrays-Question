#include<iostream>
using namespace std;
int main (){

    int arr[]={2,5,6,3,3,4,8,7};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    cout<<sum<<endl;
}