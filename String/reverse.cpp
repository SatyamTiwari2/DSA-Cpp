#include<iostream>
using namespace std;
int main(){
    char name[20];
    cin>>name;
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<count;
    int start=0;
    int end= count-1;
    while(start<=end){
        swap(name[start++],name[end--]);
    }
    cout<<name;
    return 0;
}