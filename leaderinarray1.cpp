#include<iostream>
using namespace std;
void leaders(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
        if(arr[i]<=arr[j]){
            flag=true;
        }
        }
        if(flag==false){
            cout<<arr[i]<<"\t";
        }
    }
    
}
int main(){
    int n;
    cout<<"enter n\n";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the leaders in the array are:\n";
    leaders(arr,n);
    
    delete[] arr;
    return 0;

}