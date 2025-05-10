#include <bits/stdc++.h>
using namespace std;
string dtob(int d){
    string s="";
    int r=0;
    while(d>1){
        r=d%2;
        s+=to_string(r);
        d=d/2;
    }
    // cout<<s<<endl;
    if(d%2==1){
        s+=to_string(1);
    }
    else{
        s+=to_string(0);
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    
//    vector<int> v;
// cout<<*(--v.end())<<endl;
// cout<<v.back()<<endl;
while(1){
int n;
cout<<"Enter a decimal number to convert to binary (or -1 to exit): ";
cin>>n;
if(n==-1){
    break;
}

cout<<dtob(n)<<endl;
}

}
