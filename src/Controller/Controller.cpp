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
	string stringSize ("Hello");
	cout << "stringSize is " << stringSize.length()<<endl;
}

void Controller :: empty()
{
	string isEmpty ("false");
if(!isEmpty.empty())
{
	 cout << "isEmpty contains something "<< endl;
}
}

void Controller :: compare()
{
 string stringOne ("Same");
 string stringTwo ("Same");

 int final = stringOne.compare(stringTwo);
 if(final == 0)
 {
	 cout << "stringOne and stringTwo are the same"<< endl;
 }
 else
 {
	 cout<< " stringOne and stringTwo are not the same"<< endl;
 }
}

void Controller :: start()
{
size();
empty();
compare();
}



