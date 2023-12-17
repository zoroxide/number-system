#include <iostream>
#include <cmath>

int main() {

    double sideLength, hypotenuse;

 
    std::cout << "Enter the length of one side of the square: ";
    std::cin >> sideLength;

    std::cout << "Enter the length of the hypotenuse: ";
    std::cin >> hypotenuse;


    //Pythagorean theorem: a^2 + b^2 = c^2
    double otherSide = sqrt(hypotenuse * hypotenuse - sideLength * sideLength);

    double area = sideLength * sideLength;

    std::cout << "The area of the square is: " << area << std::endl;

    return 0;
}