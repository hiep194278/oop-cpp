#ifndef OFFICER_H
#define OFFICER_H

#include <string>

enum class Gender { 
    Male, 
    Female, 
    Other 
};

class Officer
{
protected:
    std::string name;
    std::string address;
    int age;
    Gender gender;
    
public:
    // Constructor
    Officer(const std::string& name, const std::string& address, int age, 
            Gender gender);

    // Getters
    std::string getName() const;
    std::string getAddress() const;
    int getAge() const;
    Gender getGender() const;

    // Setters
    void setName(const std::string& name);
    void setAddress(const std::string& address);
    void setAge(int age);
    void setGender(Gender gender);
    virtual void displayInfo();
};
 
#endif // OFFICER_H