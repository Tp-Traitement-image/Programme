#include "complaints.h"

/**
 * Adds a complaint to the collection
 * @param complaint : Complaint to add
 */
void Complaints::add(const Complaint& complaint)
{
	items.push_back(complaint);
}

/**
 * Removes a complaint from the collection
 * @param index: index of hte complaint to remove
 */
void Complaints::remove(const int& index)
{
	items.erase(items.begin() + index);
}

/**
 * returns the size of the collection
 */
int Complaints::size() const
{
	return items.size();
}

/**
 * Returns a complaint from the collection
 * @param index: Index of the complaint to return
 */
const Complaint& Complaints::operator[](const int& index) const
{
	return items[index];
}
