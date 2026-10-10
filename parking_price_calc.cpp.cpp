#include <iostream>
using namespace std;

int main(){
    short int m;

    cin >> m;
    
    if (m <= 15){
        cout << "0";
    } else {
        short int time = m - 15;
        if (time / 60 >= 5){
            cout << "500";
        } else {
        if (time % 60 != 0){
            cout << ((time / 60 )* 100) + 100;
        } else{
            cout << (time / 60 )* 100;
        }
    }
    }
    
    return 0;
}