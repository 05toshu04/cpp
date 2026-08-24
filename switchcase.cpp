#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"enter the day:"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"sunday";
        break;

        case 2:
        cout<<"monday";
        break;

        case 3:
        cout<<"tuesday";
        break;

        case 4:
        cout<<"wednesday";
        break;

        case 5:
        cout<<"thursday";
        break;

        case 6:
        cout<<"friday";
        break;

        case 7:
        cout<<"saturday";
        break;

        default:
        cout<<"enter number only from (1-7) only ";

    }

   
    return 0; 
}