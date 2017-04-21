#include <iostream>
using namespace std;
 
inline void printPrimes(long lower, long upper) {
	for(long i = lower; i <= upper; i++) {
            bool prime = true;
            if(i<2) prime = false;
            else if (i <= 3);
            else if (i%2 == 0 || i%3 == 0) prime = false;
            else for (long j = 5; j*j <= i; j += 6) if (i%j == 0 || i%(j + 2) == 0) prime = false;
            if(prime) cout << i << endl;
        }
}

int main() {
    long t, lower, upper;
    cin >> t;
    for(; t>0; t--) {
        cin >> lower;
        cin >> upper;
        printPrimes(lower, upper);
        cout << endl;
    }
} 