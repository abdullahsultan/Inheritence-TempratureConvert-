#include <iostream>
using namespace std;

class convert_base {

protected:
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


   void convert_it() {
       converted_value = initial_value * 0.6;
       }

};

class miles_kilos : public convert_base {

public:
   miles_kilos(double passed_value) : convert_base(passed_value) { }

  void convert_it()
  {
     converted_value=initial_value/0.6;
  }

};




  class meters_yards:public convert_base
  {
    public:
      meters_yards(double passed_value) : convert_base(passed_value) { }
      void convert_it()
      {converted_value=(initial_value*39)/36;}
  };



  class yards_meters:public convert_base
 {
 public:
   yards_meters(double passed_value) : convert_base(passed_value) { }
   void convert_it()
   {converted_value=(initial_value*36)/39;}
 };


int main() {


kilos_miles kilos1(100.0);
kilos1.convert_it();

cout << endl;
cout << endl << "Distance in kilometers is: " << kilos1.get_initial();
cout << endl << "Distance in miles is: " << kilos1.get_converted();
cout << endl;


miles_kilos miles(60);
miles.convert_it();

cout << endl;
cout << endl << "Distance in Miles is: " << miles.get_initial();
cout << endl << "Distance in KMs is: " << miles.get_converted();
cout << endl;

  yards_meters yard(60);
  yard.convert_it();

  cout << endl;
  cout << endl << "Distance in Yards is: " << yard.get_initial();
  cout << endl << "Distance in Meter is: " << yard.get_converted();
  cout << endl;

meters_yards meter(55.3846);
meter.convert_it();

cout << endl;
cout << endl << "Distance in Meter is: " << meter.get_initial();
cout << endl << "Distance in Yards is: " << meter.get_converted();
cout << endl;

return(0);
}
