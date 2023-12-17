#include <iostream>

using namespace std;

void convertSeconds(int totalSeconds, int &hours, int &minutes, int &seconds) {
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
}

int main() {
    int inputSeconds, hours, minutes, seconds;

 
    cout << "Enter the total seconds: ";
    cin >> inputSeconds;

    
    convertSeconds(inputSeconds, hours, minutes, seconds);

    
    cout << "Equivalent time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

    return 0;
}