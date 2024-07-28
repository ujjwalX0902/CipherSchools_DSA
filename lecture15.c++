#include <iostream>
using namespace std;

// A function to compare two integers and return the larger one
int compare(int a, int b) {
    if (a > b) {
        return a;  // If a is greater than b, return a
    } else {
        return b;  // Otherwise, return b
    }
}

int main() {
    // Call the compare function with arguments 4 and 5, and print the returned value
    cout << "The larger number between 4 and 5 is: " << compare(4, 5) << endl;

    return 0;
}
