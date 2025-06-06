/*! @file CPower.cpp
    @brief Implementation of Power class 
    @author Emanuele Negrino and Carlo Toscano
*/

#include "CPower.h"

/// @brief Default Constructor of Power class
Power::Power() {
    cout << "Power constructor" << endl;
    k_coeff = 0.0;
    e_coeff = 0.0;
}

/// @brief Constructor of Power class
/// @details This constructor creates a power function with the coefficients given in the array.
///	@param k coefficient of the power function
///	@param e exponent of the power function
Power::Power(double k, double e) {
    cout << "Power constructor" << endl;
    k_coeff = k;
    e_coeff = e;
}

/// @brief Copy Constructor of Power class
Power::Power(const Power& p) {

    cout << "Power copy constructor" << endl;
	
    k_coeff = p.k_coeff;
    e_coeff = p.e_coeff;
}

/// @brief Destructor of Power class
Power::~Power() {
    cout << "Power destructor" << endl;
}

/// @brief Assignment operator of Power class
/// @details This operator copies the coefficients of the power function p into the current object.
///	@param p the power function to be copied
Power& Power::operator=(const Power& p) {
    if (this != &p) {
        k_coeff = p.k_coeff;
        e_coeff = p.e_coeff;
    }
    return *this;
}

/// @brief Equality operator of Power class
/// @details This operator checks if two power functions are equal.
///	@param p the power function to be compared with
bool Power::operator==(const Power& p) {
    return (k_coeff == p.k_coeff && e_coeff == p.e_coeff);
}

/// @brief Sets the coefficients of the power function
///	@param k coefficient of the power function
///	@param e exponent of the power function
void Power::SetPower(double k, double e) {
    k_coeff = k;
    e_coeff = e;
}

/// @brief Returns the value of the function, given an input
///	@param in the input, "x" in the function
///	@return the value of the function
double Power::GetValue(double in) const {
    return k_coeff * pow(in, e_coeff);
}

/// @brief Error message function
/// @param string message to be printed
void Power::ErrorMessage(const char *string) {
    cout << endl << "ERROR -- Power --";
    cout << string << endl;
}

/// @brief Warning message function
/// @param string message to be printed
void Power::WarningMessage(const char *string) {
    cout << endl << "WARNING -- Power --";
    cout << string << endl;
}

/// @brief Gives the status of the object
void Power::Dump() {
    cout << "Power function: " << k_coeff << "*x^" << e_coeff << endl << endl;
}
