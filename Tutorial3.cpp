/*#include <iostream> 

using namespace std;

int main()
{
 int x = 2020; //i dont have to write x all the time instead i can use something more descriptive for axample i can put year instead of x
 cout << x;

}*/
/* data types(not all of them):
Integer (int) = whole number exp: age, year
double (double) = decimal exp: price
Character (char) = 1 caracter exp: letter or symbol
String (string) = 1 or more caracters exp: name sentence
boolean (bool) = true or false exp : yes/no on/of 
*/
//new axample: car description
/*#include <iostream> 

using namespace std;

int main()
{

 int year = 2020;
 double price = 99999.99;
 char stats = 'N'; // N for new and U fro used 
 string model = "mustang";
 bool for_sale = true; // if the answer is 1 than its tru and if its 0 than its false

 cout << year << endl;
 cout << price << endl;
 cout << stats << endl;
 cout << model << endl;
 cout << for_sale << endl;
}*/
// displeying text along side displeying variabels and updates
/*#include <iostream> 

using namespace std;

int main()
{

 int year = 2020;
 double price = 99999.99;
 char stats = 'N'; 
 string model = "mustang";
 bool for_sale = true;

 //for_sale = false; for example if the car is no longer for sale i can write this and update it
 //price = price * 0.9; for example if the has a 10% discount i can write this and update it (i can use it for math purpouses)

 cout << "year: " << year << endl;//in many programing languages you woud type + but in cpp i have to type the insertion operator
 cout << "price: " << price << endl;
 cout << "status: " << stats << endl;
 cout << "model: " << model << endl;
 cout << "aveilability: " << for_sale << endl;
}*/
//combining strings
#include <iostream> 

using namespace std;

int main()
{

 int year = 2020;
 double price = 99999.99;
 char stats = 'N'; 
 string make = "ford";
 string model = "mustang";
 bool for_sale = true;

string car = make + " " + model; //" " is for space
 
 cout << "year: " << year << endl;
 cout << "price: " << price << endl;
 cout << "status: " << stats << endl;
 cout << "Car: " << car << endl;
 cout << "aveilability: " << for_sale << endl;
}
