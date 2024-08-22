#include <iostream>
using namespace std;

int main()
{
    int first_number, second_number; 
    int sum, difference, product, quotient, remainders;
    
    cout<<"Enter the first number: ";
    cin >> first_number;
    cout<<"Enter the second number: ";
    cin >> second_number;
    
    sum = first_number + second_number;
    difference = first_number - second_number;
    product = first_number * second_number;
    quotient = first_number / second_number;
    remainders = first_number % second_number;
    
    cout<<"Sum: " << sum << endl;
    cout<<"Difference: " << difference << endl;
    cout<<"Product: " << product << endl;
    cout<<"Quotient: " << quotient << endl;
    cout<<"Remainder: " << remainders;
    
    
    return 0;
}
