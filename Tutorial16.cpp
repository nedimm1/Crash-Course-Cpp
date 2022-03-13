//user defined functions: how to create my own custom functions in cpp
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
//functions usualy perform some kind of task for us
using namespace std;


//this is my function, in order to create it you just type void and give it a name that reflects...
// what that function is gonna be used for. For this example its gonna be used to display a welcome message
/*void welcome(string name) { // and now its time to give this function a purpose

    cout << "welcome to *my* program" <<  name << endl;
    
};

void goodbye() {

    cout << "goodbye from my program" << endl;
};*/


/*int main() {
    

    welcome();// and now instead of writing this code here i can make just write my comand and it will...
    //do the thing i told it to do, truly amaezing

    welcome();//and if i write my function again it will print the message twice (obciusly)
    

   cout << endl;
}*/

/*int main() {
    

    welcome(" NED");//this is called an argument its when we send a frunction some informatioin
    goodbye(); 
    //and the way this function is going to recive this argument is by typing setting the peramiters of the function
    

   cout << endl;
}*/
//now i am going to create an example where i can use input with theese functions as weel
/*void welcome(string User_name, int User_age) { //i ac add more values here if i want to 

    cout << "welcome to *my* program " <<  User_name << endl;//btw this name value dosent have to be the same as...
    //the one in the main program
    cout << "your age is " <<  User_age << endl;
};

void goodbye() {

    cout << "goodbye from my program " << endl;
};



int main() {
    
    string name;
    int age;
    
    cout << "enter your name: ";
    cin >> name;
    cout << "enter your age: ";
    cin >> age;


    welcome(name,age);

    

   cout << endl;
}*/


    
 double add(double num1, double num2) {// this dosent have to be a double i t can be a int or string and so on
    double result = num1 + num2;//also make shure to write this always above the main rmethode
    return result;
};

int main()
{
    //functions

    double number1;
    double number2;

    cout << "Enter in #1 : " << endl;
    cin >> number1;
    cout << "Enter in #2 : " << endl;
    cin >> number2;

    double result = add(number1, number2);

    cout << "Your result is: " << result << endl;

    cout << endl;
    
}