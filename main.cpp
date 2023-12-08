#include <iostream>
#include <cmath>

using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimalNumber) {
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        decimalNumber /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}


void stars(int num, char sym){
    for(int i = 0; i<num; i++){
        cout<<sym;
    }
    cout<<endl;
}
int main() {
    int choice;
    cout << "1) Binary to Decimal\n";
    cout << "2) Decimal to Binary\n";
    cout << "your choice(1/2): ";
    cin >> choice;

    stars(60, '=');

    switch (choice) {
        case 1: {
            int binaryNumber;
            cout << "Enter a binary number: ";
            cin >> binaryNumber;

            int decimalNumber = binaryToDecimal(binaryNumber);
            cout << "Decimal: " << decimalNumber << endl;
            stars(30, '=');
            break;
        }
        case 2: {
            // Convert Decimal to Binary
            int decimalNumber;
            cout << "Enter a decimal number: ";
            cin >> decimalNumber;

            long long binaryNumber = decimalToBinary(decimalNumber);
            cout << "Binary: " << binaryNumber << endl;
            stars(30, '=');
            break;
        }
        default:
            cout << "Invalid choice\n";
            stars(30, '=');
            return 1; // Exit the program with an error code
    }
    return 0;
}
