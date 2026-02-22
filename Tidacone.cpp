#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void clearScreen() {
    // Clears the console for a "popup" effect
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void drawCone(int height) {
    for (int i = 1; i <= height; ++i) {
        // Print leading spaces for alignment
        cout << string(height - i, ' ');
        
        // Print the left side of the cone
        cout << "/";
        
        // Fill the inside or just the base
        if (i == height) {
            cout << string((i - 1) * 2, '_'); // Base of the cone
        } else {
            cout << string((i - 1) * 2, ' '); // Empty space
        }
        
        // Print the right side
        cout << "\\" << endl;
    }
}

int main() {
    cout << "Press Enter to 'popup' the cone icon..." << endl;
    cin.get();

    clearScreen();
    drawCone(8); // Adjust number for icon size

    cout << "Come back if you're in a Tidaconey mood!" << endl;
    
    return 0;
}
