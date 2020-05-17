#pragma once
#include "subject.h"
#include "complaints.h"

class Controller: public Subject
{
private:
	//ID of the current screnn to display
	int currentScreen;

	//Collection of complaints
	Complaints complaints;

public:
	/**
	 * Constructor
	 */
	Controller();

	/**
	 * Defines the new screen to display
	 * @param value : id of the new screen to display
	 */
	void setScreen(const int& value);

	/**
	 * Returns the id of the current displayed screen
	 */
	int getCurrentScreen();

	/**
	 * Returns the collection of complaints
	 */
	const Complaints& getComplaints();

	/**
	 * Add a  complaint to the collection
	 * @param complaint: Complaint to add
	 */
	void addComplaint(const Complaint& complaint);

	/**
	 * Removes a complaint from the collection
	 * @param index: Index of the complaint to remove
	 */
	void removeComplaint(const int& index);
};

