//shoping simulator2.0
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;




int main ()
{    
    char itemlist;
    int price;
    string anyelse;
    char itemlist2;
    cout << "welcome to myprogrammart.com" << endl;
    cout << "what woud you like to buy?" << endl;
    cout << "list of items:\nbag of chips 5$(C)\nbottle of Soda 7.99$(S)\nbread 9.99$ (B)\nNutela 15.99$ (N)\n" << endl;
    
    cin >> itemlist;

    switch(itemlist) {
    case 'C':
        cout << "chips hase been added to the cart";
        break;
    case 'S':
         cout << "soda hase been added to the cart";
         break;
    case 'B':
         cout << "bread hase been added to the cart";
         break;
    case 'N':
         cout << "Nutela hase been added to the cart";
         break;
    default:
        cout << "we dont have that item, please pick a item from the list";
         

    }
    
     cout << "\nAnything else?" << endl;

     cin >> anyelse;
   
    if(anyelse.at(0) == 'y' ) {//prees y to say yes

        cin >> itemlist2;


        switch(itemlist2) {
    case 'C':
        cout << "chips hase been added to the cart\n";
        break;
    case 'S':
         cout << "soda hase been added to the cart\n";
         break;
    case 'B':
         cout << "bread hase been added to the cart\n";
         break;
    case 'N':
         cout << "Nutela hase been added to the cart\n";
         break;
    default:
        cout << "we dont have that item, please pick a item from the list";

         

    }
       
      cout << "Now you have " << itemlist << " and " << itemlist2;
    }

   
    else if(anyelse.at(0) == 'n') {//press n to say no 
        cout << "cart: " << itemlist;
    }
    

    
    cout << "here is your recite: ";
    
    
 
 

 
 
cout << endl;
 
}