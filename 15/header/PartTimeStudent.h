#ifndef PARTTIMESTUDENT_H
#define PARTTIMESTUDENT_H

#include "Student.h"

class PartTimeStudent : public Student {
private:
    std::string trainingAssociation;

public:
    PartTimeStudent(const std::string& code, const std::string& name, const std::string& dob, 
                    int year, double score, const std::string& trainingLocation);

    // Getter and Setter for trainingAssociation
    std::string getTrainingAssociation() const;
    void setTrainingAssociation(const std::string& location);

    bool isFullTime() const override;
    void input() override;
    void output() const override;
};

#endif
