#include <iostream>
using namespace std;



bool checkPrime(int n){
    for(int i=2; i < (n/2+1); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;

}

void greet() {
    cout << "Hello there!";
}

// display a number
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}


int main(){
    int num;
    cin >> num;

    cout << "Prime : " << checkPrime(num);
    
    greet();
    
    displayNum();

    return 0;
}
