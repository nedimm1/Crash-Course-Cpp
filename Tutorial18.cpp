//Random numbers: actualy these are pseudoo random numbers which i am going to use today to create a game...
//but they are not realy used for some high level programs that involve some security
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stdlib.h>// this is for the: srand and rand functions
#include <time.h> //this alkowes me to work with time 

using namespace std;

/*int main() {

     
    srand(time(NULL));
// so this program is going to pick for me a random nuber between 0 and 6
    int number = rand() % 6 + 1;//the reasone i put + 1 here is when i run this it only picks numbers...
    //from 1 to five,and it dosent include the first and the last number (which are 0 and 6) so i put +1 there to...
    //include 6


    cout << number;




   cout << endl;
}*/


//and now i will create a program that will print me 3 random numbers
/*int main() {
   
   srand(time(NULL));


    int number1 = rand() % 10 + 1;
    int number2 = rand() % 10 + 1;
    int number3 = rand() % 10 + 1;
    

    cout << number1 << " " << number2 << " " << number3 << " ";



   cout << endl;
}*/
//and now with this new found knowladge i am going to create a guessing game 
int main() {

    int number;
    int response;
    int score = 0;

    srand(time(NULL));

    number = rand() % 10 + 1;

    do{
        cout << "enter your guess(1-10): ";
        cin >> response;

        if(response > number) {
            cout << "number is too high\n";
        }
        else if (response < number) {
            cout << "number is too low\n";
        }
        else {
            cout << "you got the number\n";
        }
        score++;

    }while(number != response);
   
   cout << "\nnumber is: " << number;
   cout << "\nnumber of guesses: " << score;
  


   cout << endl;
}