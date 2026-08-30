#include<iostream>
using namespace std;
int main(){
    cout<<"use case of continue:"<<endl;
    for(int i=1;i<=10;i++){
        
        if(i%2!=0){
            continue;
        }
        cout<<i<<endl;
    }
    cout<<"use case of break program:"<<endl;


    for(int j=1;j<=10;j++){
        if(j==6){
            break;
        }
        cout<<j<<endl;
    }
    return 0; 
}