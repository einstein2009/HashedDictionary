#include "HashedDictionary.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int hashTableSize = 0;
	int tempHashKey = 0;
	string entry = " ";
	char searchOrAdd = ' ';
	HashedDictionary<string, string> myDictionary = HashedDictionary<string, string>();

	cout << "Would you like to (S)earch or (A)dd an entry?" << endl;
	cin >> searchOrAdd;
	cout << endl;

	if (searchOrAdd == 'S' || searchOrAdd == 's')
	{

	}
	else if (searchOrAdd == 'A' || searchOrAdd == 'a')
	{
		cout << "Enter number of entries for your dictionary." << endl;
		cin >> hashTableSize;
		cout << endl;
		myDictionary.setTableSize(hashTableSize);
	
		cout << "Enter the entry you would like to add: " << endl;
		cin >> entry;
		cout << endl;
		myDictionary.add(entry, entry);
	}



	system("PAUSE");
	return 0;
}

