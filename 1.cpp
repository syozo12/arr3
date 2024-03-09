#include<iostream>
using namespace std;
int main(){
    int n,x,count=0;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                if(a[i]+a[j]+a[k]==x)
                   count++;
                   
                   
            }
        }
    }
    cout<<"total number of triplets is"<<count;
    return 0;
}