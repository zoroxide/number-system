#include <iostream>
#include <cmath>

using namespace std;

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

long long onesComplement(long long binaryNumber) {
    return binaryNumber ^ 1111111111; 
}

long long twosComplement(long long binaryNumber) {
    return onesComplement(binaryNumber) + 1;
}

void stars(int num, char sym) {
    for (int i = 0; i < num; i++) {
        cout << sym;
    }
    cout << endl;
}

int main() {
    int choice;
    cout << "1) Binary to Decimal\n";
    cout << "2) Decimal to Binary\n";
    cout << "3) One's complement\n";
    cout << "4) Two's complement\n";
    cout << "Your choice (1/2/3/4): ";
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
            int decimalNumber;
            cout << "Enter a decimal number: ";
            cin >> decimalNumber;

            long long binaryNumber = decimalToBinary(decimalNumber);
            cout << "Binary: " << binaryNumber << endl;
            stars(30, '=');
            break;
        }
        case 3: {
            int binaryNumber;
            cout << "Enter a binary number: ";
            cin >> binaryNumber;

            long long onesComplementResult = onesComplement(binaryNumber);
            cout << "One's complement: " << onesComplementResult << endl;
            stars(30, '=');
            break;
        }
        case 4: {
            int binaryNumber;
            cout << "Enter a binary number: ";
            cin >> binaryNumber;

            long long twosComplementResult = twosComplement(binaryNumber);
            cout << "Two's complement: " << twosComplementResult << endl;
            stars(30, '=');
            break;
        }
        default:
            cout << "Invalid choice\n";
            stars(30, '=');
            return 1;
    }
    return 0;
}
