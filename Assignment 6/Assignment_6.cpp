#include <bits/stdc++.h>
using namespace std;
/*
 * Author: Aman Upadhyay
 * Date: 01/04/2022
 * Email: amanupadhyay0208@gmail.com
 * GitHub: https://github.com/AmanxUpadhyay
*/

/*
    * Function to find GCD of two numbers.
*/
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

/*
    * Function to find LCM of two numbers.
*/
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

/*
    Driver Code
*/
int main(){
    int First, second;
    cout << "Enter the first number: ";
    cin >> First;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "GCD of " << First << " and " << second << " is " << gcd(First, second) << endl;
    cout << "LCM of " << First << " and " << second << " is " << lcm(First, second) << endl;

    return 0;
}