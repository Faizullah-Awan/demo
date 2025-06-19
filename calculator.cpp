#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout <<"product :" << a*b <<endl;
    cout <<"division :"<< a/b <<endl;
    cout <<"modulus : "<< a%b <<endl;   
    return 0;
}