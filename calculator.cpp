#include <iostream>
#include <cmath>
using namespace std;

int main(){
      float num1;
      cout <<"Enter num1: ";
      cin >> num1;
      char op;
      cout <<"Enter operator: ";
      cin >> op;
      float num2;  
      cout <<"Enter num2: ";
      cin >> num2;
               
      float result;
       result = fmod(num1, num2);
    
    if(op == '+') {
         result = num1 + num2;
         cout << num1 << " + " << num2 << " = " << result;
    }
    else if(op == '-') {
         result = num1 - num2;
         cout << num1 << " - " << num2 << " = " << result;
    }
    else if(op == '*') {
         result = num1 * num2;
         cout << num1 << " * " << num2 << " = " << result;
    }
    else if(op == '/') {
         if(num2 != 0) {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result;
         } else {
            cout << "Error: Division by zero";
         }
    }
    else if(op == '%') {
         if(num2 != 0) {
            result = fmod(num1, num2);
            cout << num1 << " % " << num2 << " = " << result;
         } else {
            cout <<"Error: Division by zero";
         }
    }
    else {
        cout <<"Error: Invalid operator";
    }
   return 0;
}
