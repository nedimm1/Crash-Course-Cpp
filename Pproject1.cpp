
#include <iostream> 
#include <string>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;


struct Item {
    string name;
    double price;
};


//shoping simulator3.0



 
int main(){
   
    char pick;
    
   

    cout << "welcome to myprogrammart.com" << endl;
    cout << "what woud you like to buy?" << endl;
    cout << "list of items:\nbag of chips 5$(C)\nbottle of Soda 7.99$(S)\nbread 9.99$ (B)\nNutela 15.99$ (N)\n" << endl;
    
    
     map<char, Item, double, Item> itemmap;


    map<char, Item> items;
    items['c']=Item{ "chips", 3.99 }; 
    cout << items.find('c')->second.name;
    items['s'] =Item{ "soda", 5.99 };
    cout << items.find('s')->second.name;
    items['b']=Item{ "bread", 9.99};
    cout << items.find('b')->second.name;
    items['n']=Item{ "Nutela", 14.99};
    cout << items.find('n')->second.name;






    cout << endl;

}