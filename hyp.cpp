#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double sideLength, hypotenuse;

 
    cout << "Enter the length of one side of the square: ";
    cin >> sideLength;

    cout << "Enter the length of the hypotenuse: ";
    cin >> hypotenuse;


    //Pythagorean theorem: a^2 + b^2 = c^2
    double otherSide = sqrt(hypotenuse * hypotenuse - sideLength * sideLength);

    double area = sideLength * sideLength;

    cout << "The area of the square is: " << area << std::endl;

    return 0;
}