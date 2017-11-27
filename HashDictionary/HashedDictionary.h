#ifndef _HASHED_DICTIONARY
#define _HASHED_DICTIONARY

#include "HashedEntry.h"
#include <string>

using namespace std;

template <class KeyType, class ItemType>
class HashedDictionary : public HashedEntry<KeyType, ItemType>
{
private:

	int tableSize;
	ItemType hashTable[];
public:
	HashedDictionary();
	bool add(const KeyType& searchKey, const ItemType& newItem);
	bool remove(const KeyType& searchKey);
	int getTableSize();
	void setTableSize(int size);
	int getStringNum(string s);
	int getHashIndex(const KeyType& searchKey);
};

#include "HashedDictionary.cpp"
#endif // !_HASHED_DICTIONARY