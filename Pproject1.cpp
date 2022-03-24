//shoping simulator2.0
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;





//shoping simulator3.0



 
int main(){
   
    char pick;
    
    

    cout << "welcome to myprogrammart.com" << endl;
    cout << "what woud you like to buy?" << endl;
    cout << "list of items:\nbag of chips 5$(C)\nbottle of Soda 7.99$(S)\nbread 9.99$ (B)\nNutela 15.99$ (N)\n" << endl;
    
    cin >> pick;

   char options[] = {'c', 's', 'b', 'n'};
string names[] = {"chips", "soda", "bread", "nutella"};

cin >> pick;
for(int i = 0; i < 4, i++;) {
    if(pick == options[i]) {
        cout << "You chose " << names[i] << endl;
    }
}

 cout << "you picked " << pick;

    cout << endl;

}