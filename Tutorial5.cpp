//store simulator
#include <iostream> 
#include <string>


using namespace std;

int main()
{
  string item;
  double price;
  int cuantity;
  double total;

  cout << "welcome! what item woud you like to buy?: ";
  getline(cin, item);
  cout << "what is the price for each?: ";
  cin >> price;
  cout << "how many woud you like?: ";
  cin >> cuantity;
  cout << endl;

  cout << "here is your recite";

  total = price * cuantity;

  cout << "item: " << item << endl;
  cout << "price: $" << price << endl;
  cout << "x $" << cuantity << endl;
  cout << "your total is: $" << total << endl;
  
  cout << "enjoy!";

  cout << endl;

}