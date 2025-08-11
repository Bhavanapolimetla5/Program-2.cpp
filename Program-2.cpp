#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of odd numbers to print:";
    cin>>a;
        for(int i=1;i<=INT_MAX;i++){
           if(i%2!=0 && a>0){
            cout<<i<<" ";
            a--;
           }
        }
    }