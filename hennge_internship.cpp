#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    // cout<<"hello world bro"<<endl;
    //emunnadakkooo emundakkaaa
    int t;
    
    cin>>t;
    vector<int> ans;
    while(t--){
         int n;
         cin>>n;
         int sum=0;
         vector<int> v(n);
            for(int i=0;i<n;i++){
                
                cin>>v[i];
            }
            if(v.size()!=n){
                ans.push_back(1);
            }else{
                for(auto x:v){
                    if(x<0){
                        sum+=pow(x,4);
                    }
                }
            }
            // cout<<sum<<endl;
            ans.push_back(sum);

         

    }
    for(auto x:ans){
        cout<<x<<endl;
    }
    return 0;
}
