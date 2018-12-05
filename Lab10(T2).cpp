/****************************************************
*
*  Purpose:
*          Demonstrate polymorphism by adding
*          a adding a virtual function in a derived class.
*
********************************************************/

#include <iostream>
using namespace std;

/*------------------------------------------------------
  Class Name:	convert_base
  Purpose: Provide a base class with a pure virtual function.
	   Other classes can be derived from this to
	   implement polymorphism.
---------------------------------------------------------*/
class convert_base {

protected:  		// data members for the base class
   double initial_value;
   double converted_value;

public:			// functions for the base class

   convert_base(double passed_value) {  // constructor
       initial_value = passed_value;
       }

   double get_initial() {
       return initial_value;
       }

   double get_converted() {
       return converted_value;
       }

   virtual void convert_it() = 0;  // a PURE virtual function
			   //
			   // Remember!! When a descendent
			   // uses this function, the descendent
			   // MUST define the function.

};  // end of class convert_base


/*------------------------------------------------------
  Class Name:	kilos_miles
  Purpose: Convert from kilometers to miles.
---------------------------------------------------------*/
class kilos_miles : public convert_base {

public:
   kilos_miles(double passed_value) : convert_base(passed_value) { }

			// the virtual function, convert_it()
			// is defined HERE, because the base
			// class contains a PURE function

   void convert_it() {
       converted_value = initial_value * 0.6;
       }

};  // end of class kilos_miles

/*------------------------------------------------------
  Class Name:	miles_kilos
  Purpose: Convert from miles to kilometers.
---------------------------------------------------------*/
class miles_kilos : public convert_base {

public:
   miles_kilos(double passed_value) : convert_base(passed_value) { }

	// ADD CODE HERE FOR
  convert_it()
  {
    initial_value/0.6;
  }
	// DIVIDE INITIAL VALUE BY 0.6 TO GET KILOMETERS

};  // end of class miles_kilos



/*------------------------------------------------------
  Class Name:	meters_yards
  Purpose: Convert from meters to yards.
---------------------------------------------------------*/
// ADD CODE HERE TO CREATE A CLASS FOR METERS TO YARDS
// MULTIPLY INITIAL VALUE BY 39.0/36.0 TO GET YARDS.


/*------------------------------------------------------
  Class Name:	yards_meters
  Purpose: Convert from yards to meters.
---------------------------------------------------------*/
// ADD CODE HERE TO CREATE A CLASS FOR YARDS TO METERS
// MULTIPLY INITIAL VALUE BY 36.0/39.0 TO GET METERS.


/*****************  Main Function Starts Here ***********/
int main() {


kilos_miles kilos1(100.0);  // create a kilos_to_miles object
kilos1.convert_it(); // call the virtual function of that class

cout << endl;
cout << endl << "Distance in kilometers is: " << kilos1.get_initial();
cout << endl << "Distance in miles is: " << kilos1.get_converted();
cout << endl;

/* ADD CODE HERE TO:
	1. CREATE A MILES TO KILOS OBJECT, SPECIFYING AN INTIAL VALUE OF 60.
	2. CALL THE VIRTUAL FUNCTION FOR THAT OBJECT
	3. PRINT OUT THE INITIAL AND CONVERTED VALUES.
NOTE: Refer to the preceding code for kilos to miles for an example.  */

/* Complete the coding for this step BEFORE YOU PROCEED FURTHER. */







/* ADD CODE HERE TO:
	1. USE THE YARDS TO METERS ROUTINE - SPECIFY AN INITIAL VALUE OF 4.
	2. PRINT OUT THE INITIAL AND CONVERTED VALUES.           */

/* Complete the coding for this step BEFORE YOU PROCEED FURTHER. */




/*
	3. USE THE METERS TO YARDS ROUTINE - SPECIFY AN INITIAL VALUE OF 4.
	4. PRINT OUT THE INITIAL AND CONVERTED VALUES.
   See previous code for examples.
*/

return(0);
} // end main
