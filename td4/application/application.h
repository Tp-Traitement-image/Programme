#pragma once
#include "controller.h"
#include "view-menu.h"
#include "view-add.h"
#include "view-list.h"

class Application
{
private:
	Controller controller;
	ViewMenu viewMenu;
	ViewList viewList;
	ViewAdd viewAdd;

public:
	/**
	 * Constructor
	 */
	Application();

	/**
	 * Runs the application
	 */
	void run();
};

