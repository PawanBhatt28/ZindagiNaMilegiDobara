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


// This function return the sum from 0 to n. (Created by: Rohit Saini)
int sum(int n){
    int Sum=0;
    for (int i = 0; i <= n; i++)
    {
        Sum+=i;
    }
    return Sum;
}

int main(){
    int num;
    cin >> num;

    cout << "Prime : " << checkPrime(num);

    return 0;
}
