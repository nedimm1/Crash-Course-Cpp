//nested loops: they are basicly loops inside other loops
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
// Demonstration:
int main() {

    char symbol;
    int width;
    int height;

    cout << "enter the symbol to use: ";
    cin >> symbol;

    cout << "enter the width: ";
    cin >> width;

    cout << "enter the height: ";
    cin >> height;

    for(int i = 0; i < height; i++) {// this is now a nested loop
        for(int j = 0; j < width; j++) {// also i dont have to have the same loops here for example...
        //i can write here a while loop instead of a for loop
        cout << symbol;
        }
        cout << endl;
    }







   cout << endl;
}