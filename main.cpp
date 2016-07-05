// Calculates Pi duh
#include <iostream>
#include <limits>

using namespace std;

double calculatePi(uint64_t iterations) {
    cout << "Calculating Pi with " << iterations << " iterations\n";

    // do pi calculation here

    double pi = 4; // (4 / 1)
    bool operation = false; // false = add, true = add
    uint64_t denominator = 3.0;

    for(uint64_t i = 0; i < iterations; i++) {
        // looping through every iteration of refining
        // our definition of pi

        // How to calculate for pi:
        // pi = (4/1) - (4/3) + (4/5) - (4/7)
        // every iteration changes the operation
        // and adds 2 to the denominator
        if(operation) {
            // add
            pi = pi + (4.0 / denominator);
        } else {
            // subtract
            pi = pi - (4.0 / denominator);
        }

        // add 2 to the denominator
        denominator += 2.0;
        // flip the operation
        if(operation) {
            operation = false;
        } else {
            operation = true;
        }
        cout << "\rPi: " << fixed << pi;
    }
    cout << endl;
    return pi;
}

int main()
{
    cout << "Welcome to a WIP pi calculator\nEnter your desired calculation iterations here:\n";
    uint64_t selectedAccuracy = 0;
    cin >> selectedAccuracy;

    cout.precision(51);
    double pi = calculatePi(selectedAccuracy);

    cin.get();
    cin.ignore();

    return 0;
}
