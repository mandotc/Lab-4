CPSC 121
Lab 4
Fall 2017
Eric May
Functions
Create a program that:
  1.  Displays a menu of functions that the user is able to pick from. If information is returned from a function (ie NOT a void function), then that information should be displayed outside of the function. Any information passed as an argument (in the parenthesis) should be obtained outside of the function and passed in when called.
    a) void hello()
      Will simply display the text “Hello, world!”
    b) void printBetween(int a, int b)
      Will print all numbers between a and b, including a and b, counting up
      E.G. a = 3, b = 6, ouput = “3 4 5 6” (or can use newlines)
      Order is unassumed, but data is displayed counting up
    c) bool isPrime(int n)
      Returns true to indicate n is prime, or false to indicate it’s not
      A number  n is prime if it is greater than 1 and not divisible by any of the numbers x in the range 1 < x < n
    d) int leastCommonDenominator(int a, int b)
      Returns the smallest number that is divisible by both a and b
      Which means (answer % a) and (answer % b) are both 0
      The least common denominator of 3 and 4 is 12
    e) void squaredOpposite(double &n)
      Sets the contents of the argument to be the squared value of n, with the opposite sign compared to n
      E.G. input of 3 would result in output of -9
      n is being passed as a reference variable, meaning changes made to it in the function will be reflected in the argument that was passed into the function call
  2. Asks the user if they would like to return to step 1, or exit.

Points:
1 - Documentation, readability, format
3.5 - Proper use of functions
2.5 - Proper program flow (conditionals, loops, etc)
2 - Filename, Header, and Submission Process
1 - Output testing

Create a Repository using Github Classroom by following this url: <INSERT HERE>

Header
//Author: Eric May (your name)
//CPSC 121 Lab 4
//<MM/DD/YY> (Current Date)

Filename
<Last Name><First Initial>lab4.cpp, e.x. my assignment would be named MayElab4.cpp
