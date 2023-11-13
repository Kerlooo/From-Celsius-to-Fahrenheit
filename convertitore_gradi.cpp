#include <iostream>
using namespace std;

#define endl '\n'

int main() 
{
    double gradi_celsius{}, fahrenheit{};
    
    cout << "Insert Celsius grades: ";
    cin >> gradi_celsius;

    fahrenheit = (gradi_celsius * 9/5) + 32;
    
    cout << gradi_celsius <<"°C in Fahrenheit are: " << fahrenheit;
    return 0;
}
