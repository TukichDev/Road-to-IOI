#include <iostream>
using namespace std;

int main(){
    short int TSOUSAND = 1000, FIVEHUNDRED = 500, HUNDRED = 100;
    int n = 0;

    cin >> n;

    if (n % HUNDRED != 0){
        cout << "-1";
    } else {

    int tsousands = n / TSOUSAND;
    int fivehundred = (n % TSOUSAND) / FIVEHUNDRED;
    int hundred = (n - ((tsousands * TSOUSAND) + (fivehundred * FIVEHUNDRED))) / 100;

    cout << tsousands << " " << fivehundred << " " << hundred;

    }
    
    return 0;
}