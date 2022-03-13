//Array: a variable that can store multiple values 
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

/*int main() {
    
     //now i am going to transform this into an array
    // lets say that i want to add multiple car names to this variable
    string cars[] = {"covette","Tsla","Ferrari"};//all i have to do is add theese angel brackets in front of the variable 
    //And just like that my variable now has multiple values 
    //Also (as usual) i cant type in numbers here bcz its a string
    //also if i decide that i  want to add a forth variable i can update it like this:
    cars[3] = "Audi";
    //and now its time to print
    cout << cars[0] << endl;//now in order to print one of theese values i need to put [] and than put the number...
    //of the array, all arrays start at 0 
    //[0] = Corvette
    //[1] = Tesla 
    //[2] = Ferrari



    




   cout << endl;
}*/

/*int main() {
    
     //here is a way to print all of thees at once 
    string cars[] = {"covette","Tsla","Ferrari","audi"};
//so in order to  print all of thees values i need to set this for loop to go untill all values in the array are..,
//listed 
    for(int i = 0; i < sizeof(cars);i++) {
        cout << cars[i] << endl;

    }
  
   


    




   cout << endl;
}*/

int main()
{
    int number;

    cout << "How many cars do you have?:";
    cin >> number;
    cin.ignore();

    string* pCars = new string[number];
    //pointer

    for (int i = 0; i < number;i++) {
        cout << "Enter car #" << i + 1<<" ";
        getline(cin, pCars[i]);
    }

    cout << "\nHere is your garage!\n";
    cout << "------------------------\n";

    for (int i = 0; i < number; i++) {
        cout << "Parking spot #" << i + 1 << " " << pCars[i]<<endl;
    }

    cout << endl;
    return 0;
}