#include <iostream>
#include <cmath>
#include<windows.h>

using namespace std;

// Function to show the calculator
void show_calculator()
{
    cout<<"-----------------------------------------"<<endl;
    cout<<"----                                  ---"<<endl;
    cout<<"-             SCIENTIFIC                -"<<endl;
    cout<<"-             CALCULATOR                -"<<endl;
    cout<<"---                                   ---"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      +     |      -      |      *     -"<<endl;
    cout<<"-     Add    |    Minus    |  Multiply  -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      /     |      m      |      L     -"<<endl;
    cout<<"-   Divide   |     Mod     |     Log    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      S     |      C      |      p     -"<<endl;
    cout<<"-    Square  |    Cube     |    Power   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      s     |      c      |      t     -"<<endl;
    cout<<"-     sin    |     cos     |     tan    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      r     |      k      |      .     -"<<endl;
    cout<<"-  sq root   |    clear    |    close   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
}

// Function to display the output
void display_output(int answer)
{
    cout<<"-----------------------------------------"<<endl;
    cout<<"----                     ----------------"<<endl;
    cout<<"-     CURRENT           |     "<<endl;
    cout<<"-     OUTPUT IS:        |  "<<answer<<endl;
    cout<<"---                      ----------------"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      +     |      -      |      *     -"<<endl;
    cout<<"-     Add    |    Minus    |  Multiply  -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      /     |      m      |      L     -"<<endl;
    cout<<"-   Divide   |     Mod     |     Log    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      S     |      C      |      p     -"<<endl;
    cout<<"-    Square  |    Cube     |    Power   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      s     |      c      |      t     -"<<endl;
    cout<<"-     sin    |     cos     |     tan    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      r     |      k      |      .     -"<<endl;
    cout<<"-  sq root   |    clear    |    close   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
}


int main() 
{
    show_calculator();
    display_output(5);
    return 0;
}

