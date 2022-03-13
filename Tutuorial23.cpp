//construcktor: its a special function that is automaticly called when an object is instantionated
//usefull fo assigning arguments to variables
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;


class Human {
public:
	string name;
	int age;
	double weight;
    Human(string name,int age,double weight) {//this is a constructor (similar to a function)
    // and now i can enter age and name here 
    this->name = name;//this name is whatever i resive as a argument
    this->age = age;
    this->weight = weight;
    }
	
};
int main()
{   //so now i can assign thesse as variables and make them pass in some aruments
	Human human1("Rick",65,120);
	Human human2("Morty",16,80);

	
	//human1.name = "Rick"; //so now i dont need thesse bcz i can use the constructor
	//human1.age = 65;
	//human2.name = "Morty";
	//human2.age = 16;
	cout << human1.name << endl;
    cout << human1.age << endl;
    cout << human1.weight << endl;

    cout << human2.name << endl;
    cout << human2.age << endl;
    cout << human2.weight << endl;


	
	cout << endl;
	
}

