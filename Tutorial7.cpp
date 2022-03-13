/*#include <iostream> 

using namespace std;

int main() 
{   
    int age = 14;//if i put here 18 it will write the message above but if i put 14 it wont write anything bcz if i am not 18
    if(age == 18) {// however instead of just writing nothing i am going to to write the function that displays a difrent message if i am not 18
        cout << "congrats you are 18";
    
    }

    else{// so if i write something other than 18 it will not execute stuff that is in if's bracket bcz its not tru instead it will...
    //write this message which is tru
        cout << " you are not 18";
    }
    
    cout << endl;
}*/

//ex2:/*
/*#include <iostream> 

using namespace std;

int main() 
{   
    int age = 18;//earlier i used == comparison opearator that checks if the number is eaqule to 18 
    if(age != 18) {//but now i will put this not comparison operator which checks if the two values here are diferent 
        cout << "congrats you are not 18";//so it works opposite of == now when i write 14 it will print this new message
        // and if i put the same number(18) it will write nothing 
    }


    cout << endl;
}*/

//i am going to write a new program which is going to tell me if i am an adualt or not
/*#include <iostream> 

using namespace std;

int main() 
{   
    int age = 90;
    if(age >= 18) {// so now i wrote this new comparison operator that functions in the way that whichever number i write that is lower...
    //than 18 it will say "you are not an adualt"
        cout << " you are an adualt";
    
    }

    else{
        cout << " you are not a adualt";
    }
    
    cout << endl;
}*/
//temperature simulator
#include <iostream> 


using namespace std;

int main() 
{   
    
   int temperature;
   cout << "plz enter the temperature (C): ";
   cin >> temperature;

   if(temperature >= 30){
       cout << "its HOT outside";
   }
   
   else if(temperature <= 0) {
       cout << "its COLD outside";
   }
   
   else {
       cout << "the temperature is ok";
   }
   
    
    cout << endl;
}
