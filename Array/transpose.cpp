#include<iostream>
using namespace std;
int main(){
int n, m;
cin >> n >> m;
int arr[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
int temp[n][m];
for (int i =0;i<n;i++){
    for (int j=0;j<m;j++){
        temp[j][i] = arr[i][j];
    }
}
cout<<"updated"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<temp[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}