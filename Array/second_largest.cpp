#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[50];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int second_largest =arr[0];
    for(int i = 0 ;i<n ;i++){
        if(arr[i]>largest){
           second_largest = largest;
           largest = arr[i];
        }
    }
    cout<<second_largest<<endl;
    return 0 ;
}