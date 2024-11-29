#include<iostream>
#include<algorithm>
using namespace std;
//time complexity is n and space complexity is theta(n)
void leaders(int arr[],int n){
  vector<int> leaderlist;
  int curmax=arr[n-1];
          leaderlist.push_back(curmax);

  for(int i=n-2;i>=0;i--){
    if(arr[i]>curmax){
        curmax=arr[i];
        leaderlist.push_back(curmax);
    }
  }
  for(int i=leaderlist.size()-1;i>=0;i--){
    cout<<leaderlist.at(i)<<"\t";
  }
  cout<<endl;
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