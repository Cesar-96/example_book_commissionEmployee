#include<iomanip>
#include<stdexcept>
#include<sstream>
#include "CommissionEmployee.h"//Commission class definition
using namespace std;

CommissionEmployee::CommissionEmployee(const string& first,const string& last,const string& ssn,double sales, double rate)
{
    firstName = first;//should validate
    lastName = last;//should validate
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
}

//set first name
void CommissionEmployee::setFirstName(const string& first)
{
    firstName=first;//should validate
}

//return first name
string CommissionEmployee::getFirstName()const {return firstName;}

//set last name
void CommissionEmployee::setLastName(const string& last)
{
    lastName=last;
}
//return last name
string CommissionEmployee::getLastname()const{return lastName;}

//set SSN
void CommissionEmployee::setSocialSecurityNumber(const string& ssn)
{
    socialSecurityNumber=ssn;
}
//return ssn
string CommissionEmployee::getSocialSecurityNumber()const{return socialSecurityNumber;}

//set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
    if(sales<0.0)
    {
        throw invalid_argument("Gross sales must be >=0.0");
    }
    grossSales=sales;
}
//return gross sales amount
double CommissionEmployee::getGrossSales()const{return grossSales;}

//set commission rate
void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate<=0.0 || rate >= 1.0)
    {
        throw invalid_argument("Commission rate must be > 0.0 and <1.0");
    }

    commissionRate=rate;
}

double CommissionEmployee::getCommissionRate()const{return comissionRate;}

//calculate earnings
double CommissionEmployee::earnings()const
{
    return commissionRate*grossSales;
}

//return string representation of CommissionEmployee object
string CommissionEmployee::toString()const{
    ostringstream output;
    output << fixed << setprecision(2);//two digits of precission
    output << "commission employee" << firstName << "  " << lastName << "\nsocial security Number: "<<socialSecurityNumber <<"\ngross Sales: " << grossSales <<"\ncommission rate: " << commissionRate;
    return output.str();
}
#include <iostream>

int main()
{
    //instantitate a CommissionEmployee object
    CommissionEmployee employee{"Sue","Jones","213-22-2451",10000,0.6}

    //get commission employee data
    cout<<fixed << setprecision(2)<<endl;//set floating-point formatting
    cout<<employee.getFirstName();
}
_
