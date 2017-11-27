#include "HashedDictionary.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int hashTableSize = 0;
	cout << "Enter number of entries for your dictionary." << endl;
	cin >> hashTableSize;
	cout << endl;
	HashedDictionary<string, string> myDictionary = HashedDictionary<string, string>();
	myDictionary.setTableSize(hashTableSize);


	myDictionary.add("952-220-9401", "Nick Ackors");


	system("PAUSE");
	return 0;
}