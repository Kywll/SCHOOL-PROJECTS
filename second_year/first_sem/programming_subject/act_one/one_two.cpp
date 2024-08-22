#include <iostream>
using namespace std;

int main()
{
    int celcius; 
    int farenheit;
    
    cout<<"Enter the temperature in Celsius: ";
    cin >> celcius;

    farenheit = (celcius * 9/5) + 32;
    
    cout << celcius << " Celcius is equal to " << farenheit << " Farenheit";

    return 0;
}
