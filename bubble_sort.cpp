#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> &arr){
int n=arr.size();
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
for(auto x:arr){
    cout<<x<<" ";
}
}
int main(){
int n;
   
    cout<<"enter the size of array"<<endl;
    cin>>n;
     vector<int> arr(n);
    cout <<"enter the elements of the array"<<endl;
    int t=n;int i=0;
    while(t--){
            int temp;
            cin>>temp;
            arr[i]=temp;
            i++;
    }
    for(auto x:arr){
        cout<<x<<" ";
        cout<<"ho"<<endl;
    }
bubble_sort(arr);


}
