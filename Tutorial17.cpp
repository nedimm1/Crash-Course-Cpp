//overloaded functions: they are basicly this concept where you can reuse a functions name as long as the...
//function has diferent diferent pearmiter setup
#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
//i am going to demonstrate how this works by creating a pizza baking simulator
void bakePizza(string bread) {// as you can see i can use this function only has one argument 

    cout << "Here is your ";
    cout << bread << " ";
    cout << "pizza";
}

void bakePizza(string bread, string sauce) {//and this one has 2 which means that i can still use the name of it
//and if this was the same as the one above than it woud cause an error
    cout << "Here is your ";
    cout << bread << " ";
    cout << sauce << " ";
    cout << "pizza";
}

void bakePizza(string bread, string sauce, string cheese) {

    cout << "Here is your ";
    cout << bread << " ";
    cout << sauce << " ";
    cout << cheese << " ";
    cout << "pizza";
}

void bakePizza(string bread,string sauce,string cheese,string topping) {

    cout << "Here is your ";
    cout << bread << " ";
    cout << sauce << " ";
    cout << cheese << " ";
    cout << topping << " ";
    cout << "pizza";
}

int main()
{
    string bread = "thicc crust";
    string sauce = "bbq";
    string cheese = "mozzerella";
    string topping = "chicken";

    bakePizza(bread,sauce,cheese,topping);

    cout << endl;
    return 0;
}