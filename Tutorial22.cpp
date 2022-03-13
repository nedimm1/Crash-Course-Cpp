//object orianted programing in c++
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>



using namespace std;

/*class human {//this is a class a class is a blueprint for what caracteristics and functions that an object shoud have
public: //this is called a acces modifier, if i dont write this it will be private 
     string name;
     int age;
     double weight;

     void eat() {
         cout << "this person is eating" << endl;
     }

      void sleep() {
         cout << "this person is sleeping" << endl;
     }

      void repeat() {
         cout << "this person is doing the same thing again" << endl;
     }




};
//and now i need to create that object...
int main() {
    human human1;

    //and now i can give human1 one some variables
    human1.name = "NED";
    human1.age = 14;

    //and now its time to present all of this 
    cout << human1.name << endl;
    cout << human1.age << endl;

   






   cout << endl;
}*/
//another example
class Human {
public:
	string name;
	int age;
	double weight;
	void eat() {
		cout << this->name <<" is eating" << endl;
	}
	void drink() {
		cout << this->name <<" is drinking" << endl;
	}
	void sleep() {
		cout << this->name <<" is sleeping" << endl;
	}
};
int main()
{
	Human human1;
	Human human2;
	Human human3;
	human1.name = "Rick";
	human1.age = 65;
	human2.name = "Morty";
	human2.age = 16;
	human3.name = "Jerry";
	human3.age = 45;
	human1.drink();
	human2.sleep();
	human3.eat();
	cout << endl;
	
}