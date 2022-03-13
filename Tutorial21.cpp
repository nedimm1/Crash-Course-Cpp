//2d arrays: normal array(one dimentional) can only contain one row of elements but a 2d array can contain 2 rows
// its like an array of arrays 


#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

/*int main() {


    int numbers[3][6] = {  {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15,16} };//this is how to create a 2d array all i have to do is to...
    //put two angel brackets and than put a , to add a new row
    //and than put a curly bracket for the rows 
    //in the first cloms i have to put a number of rows that i have  (which is 3)
    // and in the second i have to put a number of coloms that i have 

    cout << numbers[2][5];//and if i want to print one of the values i am going to have to put the number
    //of the row that the number is in and than a colom where that number is at 






   cout << endl;
}*/

/*int main() {


    int numbers[3][6] = {  {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15,16} };

    //and now  am going to print all of the elemets of this array 
    //and in order to do that i am going to create a nested loop
    for (int row =0;row < 3;row++) {// this outer loop is in charge of the row that i am on 
    //and a iner loop which is in charge of the coloms
        for(int colom =0;colom < 6;colom++) {
            cout << numbers[row][colom] << " ";

        }
        cout << endl;
    }
    
    

    






   cout << endl;
}*/
//and now i am going to create a program which will print out a keyboard
int main()
{
    char keyboard[4][10] = {
                            { '1','2','3','4','5','6','7','8','9','0' },
                            { 'Q','W','E','R','T','Y','U','I','O','P' },
                            { 'A','S','D','F','G','H','J','K','L',';' },
                            { 'Z','X','C','V','B','N','M',',','.','/' }
                           };

    for (int row = 0; row < 4;row++) {
        for (int column = 0; column < 10;column++) {
            cout << keyboard[row][column] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}