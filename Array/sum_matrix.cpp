#include<iostream>
using namespace std;
int main(){
int n, m;
cout<<"enter rows: "<<endl;
cin >> n;
cout<<"enter colum: "<<endl;
cin>> m;
int arr[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
int sum=0;
for (int i =0;i<n;i++){
    for(int j=0;j<m;j++){
        sum = sum + arr[i][j];
    }
}
cout<<sum;
    return 0;
}