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
int temp[m][n];
for (int i =0;i<n;i++){
    for (int j=0;j<m;j++){
        temp[j][i] = arr[i][j];
    }
}
cout<<"updated"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=m-1;j>=0;j--)
    {
        cout<<temp[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}