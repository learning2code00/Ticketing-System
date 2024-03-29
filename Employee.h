#include <iostream>
#include <iomanip>
#include "Sanitization.h"

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
	private:
		int ID;
		std::string firstName;
		std::string lastName;
		std::string expertise;
		double rate;
	public:
		//Constructors
		Employee();
		Employee(int size, std::string tempFirstName, std::string tempLastName, std::string tempExpertise);
		Employee(int tempID, std::string tempFirstName, std::string tempLastName, std::string tempExpertise, double tempRate);
        //Mutators
        void setID(int tempID);
		void setFirstName(std::string tempFirstName);
		void setLastName(std::string tempLastName);
		void setExpertise(std::string tempExpertise);
		void setRate(double tempRate);
		//Accessors
		int getID() const;
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getExpertise() const;
		double getRate() const;
		//Other functions
		void createID(int tempPreviousID);
		void determineRate();
		void display();
};
#endif
