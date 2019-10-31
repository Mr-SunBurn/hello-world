/******************************************************************************
 *  AUTHOR     : Andres Perez
 *  STUDENT ID : 1102394
 *  LAB #7     : Eclipse Lab
 *  CLASS      : CS1A
 *  SECTION    : MW: 8am
 *  DUE DATE   : 10/3/18
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/******************************************************************************
 * ECLIPSE TUTORIAL
 * ----------------------------------------------------------------------------
 * This program will output the class heading
 * ----------------------------------------------------------------------------
 * INPUT:
 *    <There is no input for this program - output data is obtained through
 * the constants.>
 *
 * OUTPUT:
 *    <This program will output a class heading>
 *****************************************************************************/
int main()
{
/******************************************************************************
 * CONSTANTS
 * ----------------------------------------------------------------------------
 * OUTPUT - USED FOR CLASS HEADING
 * ----------------------------------------------------------------------------
 * PROGRAMMER : Programmer's name
 * CLASS      : Student's Course
 * SECTION    : Class Days and Times
 * LAB_NUM    : Lab Number (specific to this lab)
 * LAB-NAME   : Title of the Lab
 * ***************************************************************************/

const char  PROGRAMMER[] = "Andres Perez";
const char  CLASS[]       = "CS1A";
const char  SECTION[]     = "MW:  8:00 - 10:20";
const int   LAB_NUM       = 7;
const char  LAB_NAME[]    = "Eclipse Tutorial";

// variable declarations go here

// OUTPUT - Class Heading
cout << left;
cout << "************************************************\n";
cout << "* PROGRAMMED BY : "   << PROGRAMMER << endl;
cout << "*         "<< setw(14) << "CLASS"    << ": " << CLASS    <<endl;
cout << "*         "<< setw(14) << "SECTION"  << ": " << SECTION  <<endl;
cout << "*         "<< setw(9)  << LAB_NUM    << ": " << LAB_NAME <<endl;
cout << "**************************************************\n\n";
cout << right;

/******************************************************************************
 * INPUT -describe input here
 *****************************************************************************/

 /*****************************************************************************
* PROCESSING -describe processing here
******************************************************************************/

/******************************************************************************
* OUTPUT - describe output here
******************************************************************************/

return 0;
}



