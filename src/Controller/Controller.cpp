/*
 * Controller.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: jand6944
 */
#include "Controller.h"

#include <iostream>
#include <string>
using namespace std;

void Controller :: size()
{
	std::string stringSize ("Hello");
	std:: cout << "stringSize is " << stringSize.length()<<endl;
}

void Controller :: empty()
{
std::string isEmpty ("false");
if(!isEmpty.empty())
{
	std:: cout << "isEmpty contains something "<< endl;
}
}

void Controller :: compare()
{

}

void Controller :: start()
{
size();
empty();
}



