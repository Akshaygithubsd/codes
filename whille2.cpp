#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int i = 1;

    while(i<=n){
        int j = 1;
        int var = i;
        while(j<=i){
            cout<<var<<" ";
            var = var - 1;
            j = j+1;


        }
        i=i+1;
        cout<<endl;
        
    }
}