/*
Diego Brown
Purpose: To experement with the pointer and reference data types
*/
//pointer practice 1
#include<iostream>
#include<string>

using namespace std;

int main()
{
//Print out the address of int a  = 1
  int a = 1;        // cout<< &a and done.
  //pointer 'ay' to address of 'a'
  int *ay = &a;

  string b = "one";
  //pointer 'be' points to the address of 'b'
  string *be  = &b;

//Now print out 2 pairs of identical addresses using pointers and references to addresses
//for variables a & b.
  cout<<"The value of a is: "<< a <<endl;
  cout<< &a<<endl;         //address of a
  cout<< ay<<endl<<endl;   //pointer to address of a

  cout<<"The value of b is: "<<b <<endl;
  cout<< &b<<endl;   //address of b
  cout<< be<<endl<<endl;   //pointer to address of b

  return 0;
}
