#include <iostream>
using namespace std;

int main()
{
    int length, width; 
    int area;
    
    cout<<"Enter the length of the rectangle: ";
    cin >> length;
    cout<<"Enter the width of the rectangle: ";
    cin >> width;

    area = length * width;
    
    cout << "Area of the rectangle: " << area << " square units";

    return 0;
}
