//Diego Brown
//Lab11


#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;



template<class A>
void mySwap(A a[], int po1, int po2) {

	A tmp;
	tmp = a[po1];
	a[po1] = a[po2];
	a[po2] = tmp;

}


template<class A>
A myMin(A a[]) {
	A min = a[0];
	for (int b = 0; b < 100; b++)
	{
		if (a[b] < min)
		{
			min = a[b];
		}
	}
	return min;
}


template<class A>
A myMax(A a[]) {
	A max = a[0];
	for (int c = 0; c < 100; c++)
	{
		if (a[c] > max)
		{
			max = a[c];
		}
	}
	return max;
}

template<class A>
A mySearch(A a[], A n)
{
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == n)
		{
			return i;
		}
	}
	//fout << "Item not found using search function." << endl;
}

int main()
{
	ifstream fin, fis, fid;
	ofstream fout;


	int a[100];
	string b[100];
	double c[100];



	//file in
	fin.open("integers.txt");
	fis.open("strings.txt");
	fid.open("doubles.txt");

	//fileout
	fout.open("output.txt");


	for (int i = 0; i < 100; i++)
	{
		fin >> a[i];
		fis >> b[i];
		fid >> c[i];

	}

	fout << "Integers: " << endl;
	fout << "Swapped items at positions 10 & 20." << endl;
	fout << "Before: [10] " << a[10] << " [20] " << a[20];

	mySwap(a, 10, 20);

	fout << "After: [10] " << a[10] << " [20] " << a[20];

	fout << "Minumum: " << myMin(a) << endl;

	fout << "Maxinum: " << myMax(a) << endl;

	fout << "The number 1 is at position " << mySearch(a, 1);
	fout << "The number 5 is at position " << mySearch(a, 5);
	fout << endl<<endl;




	//---------------------------------------------------strings
	fout << "Strings: " << endl;
	fout << "Swapped items at positions 10 & 20." << endl;
	fout << "Before: [10] " << b[10] << " [20] " << b[20];

	mySwap(a, 10, 20);

	fout << "After: [10] " << b[10] << " [20] " << b[20];

	fout << "Minimum: " << myMin(b) << endl;

	fout << "Maximum: " << myMax(b) << endl;

	// CANNOT SOLVE BY CHANGING second param to type A.
	// Had to comment out to compile
	//fout << "The string Airport is at position " << mySearch(b, "Airport");
	//fout << "The string X-ray is at position " << mySearch(b, "X-ray");

	fout << endl<<endl;

	//---------------------------------------------------doubles

	fout << "Doubles: " << endl;
	fout << "Swapped items at positions 10 & 20." << endl;
	fout << "Before: [10] " << a[10] << " [20] " << a[20];

	mySwap(a, 10, 20);

	fout << "After: [10] " << c[10] << " [20] " << c[20];

	fout << "Minumum: " << myMin(c) << endl;

	fout << "Maximum: " << myMax(c) << endl;

	fout << " The double 4.62557 is at position " << mySearch(a, 1);
	fout << " The double 1.23456 is at position " << mySearch(a, 5);

}
