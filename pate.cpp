#include <iostream>
using namespace std;
int main(){
    int n;
  
    cout<<"enter the no."<<endl;
      cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='D'-i+j;
            cout<<ch;
            j++;

        }
        i++;
        cout<<endl;
    }
}