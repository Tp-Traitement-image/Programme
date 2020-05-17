#include "view-add.h"
#include <iostream>

/**
 * Constructor
 * @param _controller: Application controller
 */
ViewAdd::ViewAdd(Controller& _controller)
	: View("Nouvelle doleance"), controller(_controller)
{
	controller.addObserver(this);
}

/**
 * Notification function of the view
 */
void ViewAdd::notify()
{
	if (controller.getCurrentScreen() == 2)
		display();
}

/**
 * Displays the view
 */
void ViewAdd::display()
{
	clear();
	View::display();

	std::cout << "Saisissez votre message ci-dessous ou laissez vide pour revenir au menu : " << std::endl;

	std::string message;
	std::cin.clear();
	do {
		std::getline(std::cin, message);
	} while (message.empty());

	if (message.empty())
		controller.setScreen(0);
	else
	{
		Complaint complaint;
		complaint.setMessage(message);

		controller.addComplaint(complaint);
	}
}
