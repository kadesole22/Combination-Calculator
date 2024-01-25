
 //Author : Kade Sole
 //Program : hw7, q2

 //Question - Write a program that computes C(n,r) using the following functions 1. Main: 2.Check 3.comb 4. fact

 //Psuedo Code Create 4 seperate functions Make the Err_msg be a print statement that lets the user know an error has been made. let the fact function
 // Calculate the factorial of int n and int r make the main function prompt the user for 2 numbers, n and r. and finally the check function that compares r and n
 // to see if r > n then invoke the err msg.

#include <iostream>
using namespace std;
//Function prototype
void err_msg();
double comb(int,int);
double fact(int);
void check(int r, int n);
//Main function
int main()
{   //variable decleration
    int n,r;
    //Print statements to collect n and r
    cout<<"Enter a value for n in C(n,r) : ";
    cin>>n;
    cout<<"Enter a value for r in C(n,r) : ";
    cin>>r;
    //Function call to see if r > n
    check(r , n);
    cout << comb(n,r) << endl;
    //Buffer
    system("pause");
    return 0;
}

//Function definition
void err_msg()
{
    cout<<" n must be greater than or equal to r in C(n,r)\n";
}

//Calculates C(n,r)
double comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

//Calculates the factorial
double fact(int n)
{
     int i;
    double f = 1;
    for(i=1;i<=n;i++)
        f *= i;
        return f;
}
//Checks to see if there was an error
void check(int r, int n){
if(r>n)
        err_msg();
    }
