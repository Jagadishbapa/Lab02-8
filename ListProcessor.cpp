// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(10.45);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "The numbers of cows is : " << cows.size() << endl << endl;
	cout << "The sum for cows is : " << cows.sum() << endl << endl;
	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	horses.insertAsLast(3.333);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	List pigs;
	pigs.sum();
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "horses size : " << horses.size() << endl << endl;

	List opossums;
	cout << "The size of opossums is : "<< opossums.size() << endl << endl;
	opossums.insertAsLast(7.77);
	cout << "The new size of opossums is : " << opossums.size() << endl << endl;
	opossums.insertAsLast(2.23);
	cout << "The size of opossums is : " << opossums.size() << endl << endl;
	cout << "The new sum of opossums is : " << opossums.sum() << endl << endl;
	
	cout << "End of code" << endl;
	system("pause");
	return 0;
}

