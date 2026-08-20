#include<iostream>
using namespace std;
int main(){
int row, col;
cin >> row >> col;
int arr[100][100];
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>arr[i][j];
    }
}
for(int i=0;i<row;i++){
    for (int j =0;j<col;j++){
        if (arr[i][j]==0){
            for(int k=0;k<row;k++){
                if(arr[k][j]!=0){
                    arr[k][j]=-1;
                }
            }
            for(int l=0;l<col;l++){
                if(arr[i][l]!=0){
                    arr[i][l]=-1;
                }
            }
        }
    }
}
for(int i=0;i<row;i++){
    for(int j =0;j<col;j++){
        if(arr[i][j]== -1){
            arr[i][j]=0;
        }
    }
}
cout<<"updated"<<endl;
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}