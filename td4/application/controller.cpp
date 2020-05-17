#include "controller.h"

/**
 * Constructor
 */
Controller::Controller()
	: Subject(), currentScreen(0)
{
}

/**
 * Defines the current screen to display
 * @param value : id of the screen to display
 */
void Controller::setScreen(const int& value)
{
	if (value >= 0 && value <= 9)
		currentScreen = value;

	notify();
}

/**
 * Returns the id of the current displayed screen
 */
int Controller::getCurrentScreen()
{
	return currentScreen;
}

/**
 * Returns the collection of complaints
 */
const Complaints& Controller::getComplaints()
{
	return complaints;
}

/**
 * Add a  complaint to the collection
 * @param complaint: Complaint to add
 */
void Controller::addComplaint(const Complaint& complaint)
{
	complaints.add(complaint);
	setScreen(0);
}

/**
 * Removes a complaint from the collection
 * @param index: Index of the complaint to remove
 */
void Controller::removeComplaint(const int& index)
{
	complaints.remove(index);
	notify();
}