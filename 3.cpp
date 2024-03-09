#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag=true;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(a[i]==a[j] ){
                flag==false;
                break;
            }
        
        }
        if(flag==true){
             cout<<a[i];
             break;
        }
    }
    return 0;
        
}