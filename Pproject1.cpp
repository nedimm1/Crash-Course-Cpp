
#include <iostream> 
#include <string>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;




//shoping simulator3.0



 
int main(){
   
    char item1;
    char item2;
    string anyelse;
   
   

    cout << "welcome to myprogrammart.com" << endl;
    cout << "list of items:\nbag of chips 5$(C)\nbottle of Soda 7.99$(S)\nbread 9.99$ (B)\nNutela 15.99$ (N)\n" << endl;
    
    cout << "what woud you like to buy something?" << endl;
    
    switch(item1){
        case 'c':
        cout << "chips have been added to the cart";
        break;
        case 's':
        cout << "soda has been aded to the cart";
        break;
        case 'b':
        cout << "soda hass been added to the cart";
        break;
        case 'n':
        cout << "nutela hass been aded to the cart";
        default:
        cout << "we dont have that item, pls pick a item from the list";
    }
    
    cout << "cart: " << item1;

    


}