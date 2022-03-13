/*#include <iostream> 

using namespace std;

int main()
{
  string name;

  cout << "please enter your name: ";
  cin >> name;
  
  cout << "welcome: " << name;

  cout << endl;

}*/
/*cin: input
>>: extraction operator
name: something to function as inputf
cin >> name;: functions oppiset from cout <<
*/
// age example 
/*#include <iostream> 

using namespace std;

int main()
{
  int age;

  cout << "please enter your age: ";
  cin >> age;
  
  cout << "You are: " << age << " year's old";
  //cout << "year's old" << endl; 
  cout << endl;

}*/
/*also, if i for example write here a word instead of a number i will get 0 (which means false) in future leasones i will learn
how to pervent peapole from doing things and thake corrective actions

one problem with the first example is that the cin function dosent exept blank spaces. This is a problem bcz when i enter my first
and last name Nedim  it wont write my last name bcz it stops at any blank space. So now i am going to rewrite my first example
in order to fix my mistake*/

#include <iostream> 
#include <string>// in order to fix i am gonna have to write this in order to write the new function that will solve this problem

using namespace std;

int main()
{
  string name;

  cout << "please enter your name: ";
  getline(cin, name); //this is the function i will use instead of the old one this new one will read out the entier line of text
  //however this only works with string
  cout << "welcome: " << name;

  cout << endl;

}
