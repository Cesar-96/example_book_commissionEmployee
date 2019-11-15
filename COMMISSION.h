#ifndef COMMMISSION_if
//#endif // COMMMISSION_if
#define COMMISSION_H


#include <string>//c++ standard string class

class CommissionEmployee{
public:
    CommissionEmployee(const std::string&, const std:: string&, const std::string&, double= 0,0 , double = 0,0);//pueden ser :

    void setFirstName(const std::string&);//set first name
    std::string getFirstName()const; //return first name

    void setLastName(const std::string&);//set last name
    std::string getLastname()const;//return last name


    void setSocialSecurityNumber(const std::string&)//set SSN
    std::string getSocialSecurityNumber()const; //return SSN

    void setGrossSales(double);//Set groos sales amount
    double getGrossSales()const;//return gross sales amount

    void setCommissionRate(double);//set commision rate amoin
    double getCommissionRate()const;//return commisionrate amount

    double earnings()const;//calculate earnings
    std:: string toString()const;//create string representation
private:
    std:: string firstName;
    std:: string lastName;
    std:: string socialSecurityNumber;
    double grossSales;//gross weekly sales
    double commissionRate;//commission percentage
};

//#endif


