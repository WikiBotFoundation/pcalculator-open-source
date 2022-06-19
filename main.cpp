#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  cout << "Write /help to view all commands";
  string commands = "";
  cin >> commands;
  if(commands == "/help"){
   cout << "cos(): Cosine operation" << endl;
   cout << "+: Addition" << endl;
   cout << "-: Subtraction" << endl;
   cout << "*: Multiplication" << endl;
   cout << "/: Division" << endl;
   cout << "√: Square root of a number" << endl;
   cout << "arcsin(): Arcsine of a number" << endl;
   cout << "%: Percentage (modulo) of a number" << endl;
   cout << "sin(): Sine of a number" << endl;
  }
   string operation = "";
  cout << "enter operation:";
  cin >> operation;
  if(operation == "/"){
     int x;
     cin >> x;
     int y;
     cin >> y;
     int sum = x / y;
     if(x, y == 0){
     	cout << "Cannot divide by zero";
     }
     }
  if(operation == "+"){
     int x;
     cin >> x;
     int y;
     cin >> y;
     int sum = x + y;
     cout << sum;
   }
   if(operation == "*"){
     int x;
     cin >> x;
     int y;
     cin >> y;
     int sum = x * y;
     cout << sum;
    }
     if(operation == "-"){
       int x;
       cin >> x;
       int y;
       cin >> y;
       int sum = x - y;
      cout << sum;
      }
      if(operation == "√"){
        int x;
        cin >> x;
        cout << sqrt(x);
       }
      if(operation == "cos()"){
        int x;
        cin >> x;
        cout << cos(x);
       }
      if(operation == "tan()"){
        int x;
        cin >> x;
        cout << tan(x);
       }
       if(operation == "sin()"){
       	int x;
       	cin >> x;
       	cout << sin(x);
       }
       if(operation == "%"){
       	int x;
       	cin >> x;
       	int y;
       	cin >> y;
       	cout << x % y;
       }
       if(operation == "arcsin()"){
       	int x;
       	cin >> x;
       	cout << asin(x);
       }
       if(operation == "^"){
       	int x;
       	cin >> x;
       	int y;
       	cin >> y;
       	cout << pow(x, y);
       }
       if(operation =="max"){
       	int x;
       	cin >> x;
       	int y;
       	cin >> y;
       	int sum = max(x, y);      	
       	cout << "Largest Number:" << sum;
       }
      
       
}
    
