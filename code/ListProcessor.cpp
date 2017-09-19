// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.cpp"


int main()
{
	List cows;
	cows.insertAsLast(1); // Tests insert as last.
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << " List sum: " << cows.sum() << endl 
	<< endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(2);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << " List sum: " << cows.sum() << endl
	<< endl;

	cows.removeFirst();
	cows.insertAsLast(2.5);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << " List sum: " << cows.sum() << endl
	<< endl;

	List horses(cows);
	horses.insertAsLast(3);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << " List sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << " List sum: " << horses.sum() << endl
	<< endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cows.insertAsLast(4);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << " List sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << " List sum: " << horses.sum() << endl
	<< endl;

	List pigs;
	pigs.insertAsLast(5);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << " List sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << " List sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "List size: " << pigs.getSize() << " List sum: " << pigs.sum() << endl << endl;

	pigs = cows;
	pigs.insertAsLast(6);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << " List sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << " List sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "List size: " << pigs.getSize() << " List sum: " << pigs.sum() << endl << endl;

	pigs = horses;
	pigs.insertAsLast(7);
	cout << "cows list  :  " << cows << endl;
	cout << "List size: " << cows.getSize() << " List sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "List size: " << horses.getSize() << " List sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "List size: " << pigs.getSize() << " List sum: " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
