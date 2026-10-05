#include <iostream>
#include <cmath>
using namespace std;

int main(){
    short int PRICE = 30;
    short int amount, balance;

    cin >> amount >> balance;

    if (amount >= 5){
        short int PRICE = 25;
        if ((PRICE * amount) > balance){
            cout << "NO " << labs((PRICE * amount) - balance);
        } else {
            cout << "YES " <<  balance - (PRICE * amount) ;
        }
    } else {
        if ((PRICE * amount) <= balance){
            cout << "YES " << balance - (PRICE * amount);
        } else {
            cout << "NO " << labs((PRICE * amount) - balance);
        }
        
    }

    return 0;
}