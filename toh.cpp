#include<bits/stdc++.h>
using namespace std;
int coun=0;
void toh(int n,int a,int b,int c){
    // int count=0;
    if(n>0){
        toh(n-1,a,c,b);
        cout<<"moved from "<<a<<" to "<<c<<" "<<endl;
        toh(n-1,b,c,a);
        coun++;
    }
}

int main(){
    int n;
    cout<<"ebter the value of n";
    cin>>n;
    toh(n,1,2,3);
    cout<<coun<<endl;
    return 0;
}