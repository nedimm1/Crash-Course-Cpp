#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
//while loops are infinite for loops are not
using namespace std;

/*int main() {

    for(int i = 1; i <= 10;i++) { //i is for index
        cout << i << endl;

    }
    
    
    cout << "counting to ten";


    cout << endl;
}*/

/*int main() {

    for(int i = 10; i >= 0;i--) {
        cout << i << endl;

    }
    
    
    cout << "HAPPY NEW YEAR ";


    cout << endl;
}*/


/*int main() {

    for(int i = 10; i >= 0;i-=2) {//Instead of minus i can also put + too
        cout << i << endl;

    }
    
    
    cout << "HAPPY NEW YEAR!";


    cout << endl;
}*/

int main() {

    string word;

    cout << "enter a word to spell: ";
    cin >> word;

    for(int i = 0; i < word.length();i++) {
        cout << word.at(i) << " ";
        

    }


    cout << endl;
}