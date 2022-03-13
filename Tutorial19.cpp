//pointers
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
//addrasse-of operator 
/*int main() {

    string name = "NED";
    int age = 14;

    cout << &name << endl;//when i put & here its supposed to retur its addresse in memory
    cout << &age << endl;

    //after i ran this code two sets of random numbers and letters, this is supposed to be the addres of thees...
    //two variabels. thees addresses are temporary and when i run the code again new addrasses will apear 
    // now my gole is to store a addresse in a seperate variable and i can do that with a pointer
    //pointer is a variable that stores ther addrese of another variable 




   cout << endl;
}*/

//now in this example i am going to declare a pointer and use it 
int main() {

    string name = "NED";//ok so firs in order to create a pointer i need to list the data type of the variable 
    int age = 14;
    //since the data type of the variable is string i am going to write string and than put the * on it
    string* pName = &name;// this is now a pointer, now i need to name this pointer, in order to name it i have to
    //put a letter p first and than write the name with a uppercase letter of that name
    //now i am going to do the same thing but for age 

    int* pAge = &age;

    cout << *pName << endl;// when i put a * int he begining it will no longer print addresses it will print 
    //values of those addresses
    cout << *pAge << endl;



   cout << endl;
}