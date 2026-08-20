#include<iostream>
using namespace std;
int main(){
    int n,arr[50],sum_even=0,prod_odd=1;
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" element"<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }
    for (int i =0;i<n;i++){
        if(i%2==0){
            sum_even=sum_even+arr[i];
        }
        else{
            prod_odd =prod_odd*arr[i];
        }
    }
    cout<<endl;
    cout<<"sum of even indexed is "<<sum_even<<endl;
    cout<<"product of odd ndexed is "<<prod_odd<<endl;
    return 0;
}