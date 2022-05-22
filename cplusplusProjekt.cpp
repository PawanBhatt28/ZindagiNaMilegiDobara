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


int main(){
    int num;
    cin >> num;

    cout << "Prime : " << checkPrime(num);
    
    greet();

    return 0;
}
