#ifndef _HASHED_DICTIONARY
#define _HASHED_DICTIONARY

#include "HashedEntry.h"

template <class KeyType, class ItemType>
class HashedDictionary : public HashedEntry<KeyType, ItemType>
{
private:

	int tableSize;
	ItemType hashTable[];
public:
	HashedDictionary();
	HashedDictionary(int hTableSize);
	HashedDictionary(const KeyType& searchKey, const ItemType& newItem);
	bool add(const KeyType& searchKey, const ItemType& newItem);
	bool remove(const KeyType& searchKey);
	int getTableSize();
	void setTableSize(int size);
	int getHashIndex(const KeyType& searchKey);
};
#endif // !_HASHED_DICTIONARY