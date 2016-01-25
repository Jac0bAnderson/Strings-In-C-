/*
 * Runner.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: jand6944
 */
#include "Controller.h"
int main()
{
	Controller * baseController = new Controller();
	(*baseController).start();

	return 0;
}



