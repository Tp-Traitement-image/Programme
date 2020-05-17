#pragma once
#include <vector>
#include "complaint.h"

class Complaints
{
	//Collection of complaints
	std::vector<Complaint> items;
public:

	/**
	 * Adds a complaints to the collection
	 * @param complaint: Complaint to add
	 */
	void add(const Complaint& complaint);

	/**
	 * Removes a complaint from the collection
	 * @param index: index of the complaint to remove
	 */
	void remove(const int& index);

	/**
	 * Returns the size of the collection
	 */
	int size() const;

	/**
	 * Returns a complaint from the collection
	 * @param index: Index of the complaint to return
	 */
	const Complaint& operator[](const int& index) const;
};

