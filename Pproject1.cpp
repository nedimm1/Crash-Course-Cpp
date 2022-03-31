
#include <iostream> 
#include <string>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;




//shoping simulator3.0



 
int main(){
   
    char item;
   


    cout << "welcome to myprogrammart.com" << endl;
    cout << "list of items:\nbag of chips 5$(C)\nbottle of Soda 7$(S)\nbread 9$ (B)\nNutela 15$ (N)\n" << endl;
    
    cout << "what woud you like to buy something?" << endl;
    
    cin >> item;

    switch(item){
        case 'c':
        cout << "chips have been added to the cart";
        break;
        case 's':
        cout << "soda has been aded to the cart";
        break;
        case 'b':
        cout << "bread has been added to the cart";
        break;
        case 'n':
        cout << "nutela has been added to the cart";
        break;
        default:
        cout << "we dont have that item, pls pick an item form the list";

    }
    
}