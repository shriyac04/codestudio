#include <iostream>
using namespace std;

int main() {
    int N;
    
    cin >> N;

    int evenSum = 0;
    int oddSum = 0;

   
    while (N != 0) {
        int digit = N % 10;

        
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }

        N /= 10;
    }


    cout << evenSum <<" "<<oddSum<< endl;
    
    return 0;
}
