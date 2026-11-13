#include <iostream>
using namespace std;

int main() {
    int a[100000] = {};
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    if(a[0] > 0){
        a[0] = -a[0];
    }

    for(int i = 1; i < n; i++){
        if(a[i] > 0){
            a[i] = -a[i];
        }

        if(a[i] < a[i-1]){
            a[i] = -a[i];
        }

        if(a[i] < a[i-1]){
            cout << "No";
            return 0;
        }
    }
    
    cout << "Yes" << endl;

    for(int i = 0; i < n; i++){
        cout << a[i] << " "; 
    }

    return 0;
}