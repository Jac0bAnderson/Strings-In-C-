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

void Controller :: squareBrackets()
{
string squares ("Circles");
squares = squares[2];
cout<< squares<<endl;
}

void Controller :: subStart()
{
string wat = "asfadsfhjkdsHello";
string oh = wat.substr(12, 12);
cout<< oh <<endl;
}
void Controller :: subStartEND()
{
string Wat = "asdfcoolasdf";
string Oh = Wat.substr(4,4);
cout<< Oh << endl;

}
void Controller :: start()
{
size();
empty();
compare();
squareBrackets();
subStart();
subStartEND();
}



