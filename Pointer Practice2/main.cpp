#include <iostream>
#include <string>

using namespace std;

int main()

{
   int *p = new int[100];
    p[0] = 20;
    cout<<p<<endl;
    cout<<p[0]<<endl;
    delete [] p;

    p = nullptr;


/*

   int s[7] = {1,2,12,3,94,54,99};

   int *p;


p = s;


   for(int i = 0; i<= 6; i++)

   {



	cout<<" the value of box "<< i<<" is "<< p[i]<<endl;

       cout<<"\t"<<"The address of "<<p[i]<<" is "<< &(p[i])<<endl<<endl;
   }
   */
}
