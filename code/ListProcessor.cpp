// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.cpp"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;
	cout << "List size: " << cows.getSize() << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "List size: " << cows.getSize() << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "List size: " << pigs.getSize() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "List size: " << pigs.getSize() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "List size: " << pigs.getSize() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
