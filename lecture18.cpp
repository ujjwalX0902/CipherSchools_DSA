#include <iostream>
using namespace std;

// Function to swap two integers using pass by reference
void swap(int &a, int &b) {
    int temp = a;  // Store the value of 'a' in a temporary variable
    a = b;         // Assign the value of 'b' to 'a'
    b = temp;      // Assign the original value of 'a' (stored in 'temp') to 'b'
    
    // Print the values inside the function after swapping
    cout << "Values inside the function are: " << a << " " << b << endl;
}

int main() {
    int a = 10, b = 20;
    
    // Call the swap function with variables 'a' and 'b'
    swap(a, b);
    
    // Output the values of 'a' and 'b' after swap
    cout << "Values in main function are: " << a << " " << b << endl;
    
    return 0;
}
