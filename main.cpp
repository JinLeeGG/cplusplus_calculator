#include <cmath>
#include <cstdlib>
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

// Function to show the calculator
void show_calculator() {
  cout << "-----------------------------------------" << endl;
  cout << "----                                  ---" << endl;
  cout << "-             SCIENTIFIC                -" << endl;
  cout << "-             CALCULATOR                -" << endl;
  cout << "---                                   ---" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      +     |      -      |      *     -" << endl;
  cout << "-     Add    |    Minus    |  Multiply  -" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      /     |      m      |      L     -" << endl;
  cout << "-   Divide   |     Mod     |     Log    -" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      S     |      C      |      p     -" << endl;
  cout << "-    Square  |    Cube     |    Power   -" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      s     |      c      |      t     -" << endl;
  cout << "-     sin    |     cos     |     tan    -" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      r     |      k      |      .     -" << endl;
  cout << "-  sq root   |    clear    |    close   -" << endl;
  cout << "-----------------------------------------" << endl;
}

// Function to display the output
void display_output(double answer) {
  cout << "-----------------------------------------" << endl;
  cout << "----                     ----------------" << endl;
  cout << "-     CURRENT           |     " << endl;
  cout << "-     OUTPUT IS:        |  " << answer << endl;
  cout << "---                      ----------------" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      +     |      -      |      *     -" << endl;
  cout << "-     Add    |    Minus    |  Multiply  -" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      /     |      m      |      L     -" << endl;
  cout << "-   Divide   |     Mod     |     Log    -" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      S     |      C      |      p     -" << endl;
  cout << "-    Square  |    Cube     |    Power   -" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      s     |      c      |      t     -" << endl;
  cout << "-     sin    |     cos     |     tan    -" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "-      r     |      k      |      .     -" << endl;
  cout << "-  sq root   |    clear    |    close   -" << endl;
  cout << "-----------------------------------------" << endl;
}

int main() {
  // two inputs from user
  double num1 = 0.0;
  double num2 = 0.0;

  // output
  double answer = 0.0;

  // store the operation that we want to use (store null val)
  char inp = '\n';

  // flag to determine whether to show basic calculator or display output
  bool converter = false;

  // as long as the user does not press close, keep on going
  while (inp != '.') {
    if (converter == true) { // if we want to display output
      // we will take only one input
      display_output(answer);
      cout << "Enter: ";
      cin >> inp;

      if (inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' ||
          inp == 'p') {
        num1 = answer;
        cout << "Enter num 2: ";
        cin >> num2;
      } else if (inp == 'k' || inp == '.') {
        // just don't take any input
      } else {
        num1 = answer;
      }
    } else { // if we want to show basic calculator
      // we will take two inputs
      show_calculator();
      cout << "Enter: ";
      cin >> inp;

      if (inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' ||
          inp == 'p') {
        cout << "Enter num 1: ";
        cin >> num1;
        cout << "Enter num 2: ";
        cin >> num2;
      } else if (inp == 'k' || inp == '.') {
        // just don't take any input
      } else {
        cout << "Enter num 1: ";
        cin >> num1;
      }

      converter = true;
    }

    switch (inp) {
    case '+':
      answer = num1 + num2;
      break;
    case '-':
      answer = num1 - num2;
      break;
    case '*':
      answer = num1 * num2;
      break;
    case '/':
      answer = num1 / num2;
      break;
    case 'm':
      answer = int(num1) % int(num2);
      break;
    case 'L':
      answer = log(num1);
      break;
    case 'S':
      answer = num1 * num1;
      break;
    case 'C':
      answer = num1 * num1 * num1;
      break;
    case 'p':
      answer = pow(num1, num2);
      break;
    case 's':
      answer = sin(num1);
      break;
    case 'c':
      answer = cos(num1);
      break;
    case 't':
      answer = tan(num1);
      break;
    case 'r':
      answer = sqrt(num1);
      break;
    case 'k':
      converter = false;
      break;
    case '.':
      break;
    default:
      cout << "~~~~You Entered Invalid Value!~~~~ " << endl;
    }

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
  }

  return 0;
}
