#include <iostream>
using namespace std;

/*Osama Salem
  COSC-1436-57001
  Replit.com
  This program will accept input from the user to perform mathematical calculations and output the results using a while loop.
*/

int main() {

  //Declare variables
  int counter = 0; //counter variable for while loop
  double num; //To hold user's input
  double multi; //Hold value of num*num
  double divide; //Hold value of num/num
  double compute1; //Hold value of ((num + 3) / 5)
  double compute2; //Hold value of ((num + 3) / 5) + ((num + 7) / 2))
  
  //Process
  while (counter < 5){
    
    //Request user's input 
    cout << "Enter a nonzero value: ";
    cin >> num;
    //Note: if value entered is 0 then return the error message and if j is entered it will be treated as a 0 in the program

    //Validate user's input
    if (num == -1 || num == 0){
      //If value is equal to -1, display message and request user's input
      cout << "Please enter a nonzero value that is not -1\n" << endl;
      
    }
    else {
      //If num does not equal -1, execute the code in else code block
      
      //Calculations
      multi = num * num;
      divide = num / num;
      compute1 = (num + 3) / 5;
      compute2 = (num + 3) / 5 + (num + 7) / 2;
      
      //Output
      cout << "Value: " << num << endl; //Display value of num
      cout << num << " mutltiplied by itself is " << multi << endl;
      cout << num << " divided by itself is " << divide << endl;
      cout << "Value of (" << num << " + 3) / 5 = " << compute1 << endl;
      cout << "Value of (" << num << " + 3) / 5 + (" << num << " + 7) / 2 = " << compute2 << endl << endl;
      
    }

    counter++; // Increment value of counter before running the loop again
    
  }
  
  //Displau value of counter at the end of the program
  cout << "Value of counter is: " << counter << endl;

  return 0;
}