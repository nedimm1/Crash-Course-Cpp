//usefull string functions
#include <iostream> 
#include <string>

using namespace std;

/*int main ()
{//1. string leanght() returns a leanght of a string
 string first_name;

 cout << "enter your first name";
 getline(cin, first_name);

 if (first_name.length() > 12) {
     cout << "your name is too long";
 }

 else {
     cout << "welcome " << first_name;
 }

 
 
 

 
 cout << endl;
 
 
}*/

//using namespace std;

/*int main ()
{//2. string.empty(): returns tru if empty
 string first_name;

 cout << "enter your first name ";
 getline(cin, first_name);

 if (first_name.empty()) {
     cout << "you didnt enter anything";
 }

 else {
     cout << "welcome " << first_name;
 }

 
 
 

 
 cout << endl;
 
 
}*/
/*int main ()
{//2. string.clear(): clears a string 
 string first_name;

 cout << "enter your first name ";
 getline(cin, first_name);

 cout << "welcome: " << first_name << endl;
 cout << "*your name has been cleard*" << endl;
 first_name.clear();
 cout << "welcome: " << first_name << endl;
 

 

 
 
 

 
 cout << endl;
 
 
}*/

/*int main ()
{//3. 1.string.append(string2): appending a string (adding one string to another)
 string username;

 cout << "enter your username: ";
 getline(cin, username);

 string email = username.append("gmail.com");

 cout << "your email is now: " << email << endl;

 
 
 

 
 cout << endl;
 
 
}*/

/*int main ()
{//4. string.at(x) returns a caracter at a given index 
 string first_name;
 string middle_name;
 string last_name;

 cout << "enter your first name: ";
 getline(cin, first_name);
 cout << "enter your middle name: ";
 getline(cin, middle_name);
 cout << "enter your last name: ";
 getline(cin, last_name);

 char letter1 = first_name.at(0);
 char letter2 = middle_name.at(0);
 char letter3 = last_name.at(0);
 cout << "your initials are: " << letter1 << letter2 << letter3;
  

 
 
 

 
 cout << endl;
 
 
}*/


/*int main ()
{// string1.substr(int x, int y); returns a portion of a string

    string first_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);

    string nickname = first_name.substr(0,3);
   
    cout << "Your nickname is: " << nickname << endl;
    cout << "Hello " << nickname;


 
 

 
 cout << endl;
 
 
}*/
/*
// string1.insert(int x,string2); Insert a character within a string at an index
int main () {
    string user_name;
    cout << "Enter your user_name: ";
    getline(cin, user_name);

    user_name.insert(0,"@");

    cout << "reply: " << user_name;

    cout << endl;
}*/
/*
int main(){
// string1.find(string2); returns position of string2 within string1

 	string first_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);

    string substring;
    cout << "Search for which character/s?: ";
    getline(cin, substring);

    int position = first_name.find(substring);

    cout << "Found character/s at position: " << position;

}*/
/*int main() {

    // string1.erase(int x, int y); erases a portion of a string

    string phone_number;
    cout << "Enter your phone number w/area code: ";
    getline(cin, phone_number);

    phone_number.erase(0, 4);

    cout << "phone number w/o area code: " << phone_number;

}*/