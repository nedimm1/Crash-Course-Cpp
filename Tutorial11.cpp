//logical operators;
// &&(and) logical operator 
// ||(or) logical operator
// ! (not) logical operator
#include <iostream>// logical operators allow a program to make a desicion based on multiple conditions
#include <string>// for example we can make a if statement with more than 1 condition 
#include <cmath> 

using namespace std;
// the first one ill be using is and logical operator, with this i can see if one condition and if the other condition is tru
/*int main() {//if both conditions are tru than and if the other one is tru than the intier expresion is tru and if
// and if only one of them is false the entier expresion is false
// right now i am going to create a program for temperature using this operator 
// it works that if it falls within a certin range it will display a message
   double temp;

   cout << "enter the temperature (C): ";
   cin >> temp;

   if(temp>=35 && temp <= 37.5) {
       cout << "your temperature is normal ";

   }
   
   else {
       cout << "your temp is not normal";
   }

    
    
    

    cout << endl;
}*/
// now i will use or logical operator: its preaty similar to && however now if one expresion is tru and the other is false...
// the entier expression will be tru
/*int main() {// i will now create a program that will ask us are we sick

string cough;

cout << "do you have a cough: ";
cin >> cough;

if(cough.at(0) == 'y' || cough.at(0) == 'Y') {
    cout << "you are sick";
}

else {
    cout << "you are fine";
}

cout << endl;
}*/

// now i will use the not logical operator
// this operator will invers the operand, reverse the tru or false outcome of an expression
//now i am going to create a program which to see if i enterd my usename
int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (!name.empty()) {

        cout << "Welcome " << name;
    }
    else {
        cout << "YOU DID NOT ENTER YOUR NAME!";
    }
    
    cout << endl;
}