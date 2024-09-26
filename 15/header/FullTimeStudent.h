#ifndef FULLTIMESTUDENT_H
#define FULLTIMESTUDENT_H

#include "Student.h"

class FullTimeStudent : public Student {
public:
    FullTimeStudent(const std::string& code, const std::string& name, const std::string& dob, 
                    int year, double score);

    bool isFullTime() const override;
    void output() const override;
};

#endif
