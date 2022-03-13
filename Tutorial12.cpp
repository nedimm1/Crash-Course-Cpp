#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

/*int main() {// today i will code about while loops, which i can use to execute some code repeatedly while the condition remains tru

 while(1==1) {
  cout << "brrrrrrrrr"; //as long as the condition is tru this message will repeat nonstop
 }





    cout << endl;
}*/

/*int main() {// the usefull way i can use this function is in this example right here where i will write a program which will if you dont enter...
// your name it will not allow u to continue with the program until you answer the question
 string name;// = " "; if i include this in the code it will say nothong 

 while(name.empty()) {
     cout << "pls enter your name: " << endl;
    getline(cin,name);
 }
 cout << "welcome " << name;
 




    cout << endl;
}*/
//now i am going to use the do-while loop in this example where i create a program where i will try to simulate a game
int main(){
    string answer;

    do {
        cout << "You are playing THE GAME" << endl;
        cout << "you win " <<endl;
        cout << "wanna play more?" << endl;
        cout << "if not Press q to quit!" << endl;
        getline(cin, answer);
        cout << "************************" << endl;
    } while (answer.at(0)!='q' && answer.at(0)!='Q');//if i press anything else than q than i will "continue playing" the game until i decide..,
//that i dont want to play anymore and than just press q
    cout << "You have quit the game" << endl;

    cout << endl;
   
}