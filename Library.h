/***************************************************************************
 * AUTHOR			: Amy X, Ryland L, Cristal D, Elizabeth S, Paul S.
 * PROJECT #2		: Library Inventory System
 * CLASS			: CS 1C
 * SECTION			: TTh 8a
 * DUE DATE			: ...
 **************************************************************************/

#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>		/* cin, cout		*/
#include <iomanip>		/* setw				*/
#include <string>		/* string class		*/
#include <vector>		/* vector STL	 	*/
#include <sstream>		/* ostringstream 	*/
#include "Item.h"		/* Item class       	*/
#include "Book.h"		/* Book class       	*/
#include "Movie.h"		/* Movie class      	*/
#include "Magazine.h"	/* Magazine class  		*/
using namespace std;

/***************************************************************************
 * CLASS Library
 * -------------------------------------------------------------------------
 * This class represents a single library system that can store items.
 **************************************************************************/
class Library
{
private:
	vector<vector<Item>> libraryInventory[][];

public:
	
};



#endif
