#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <map>

class Student {
protected:
    std::string studentCode;
    std::string fullName;
    std::string dateOfBirth;
    int yearOfAdmission;
    double entranceScore;
    std::map<std::string, double> learningOutcomes;

public:
    Student(const std::string& code, const std::string& name, const std::string& dob, 
            int year, double score);
    virtual ~Student() = default;

    // Getters
    std::string getStudentCode() const;
    std::string getFullName() const;
    std::string getDateOfBirth() const;
    int getYearOfAdmission() const;
    double getEntranceScore() const;
    std::map<std::string, double> getLearningOutcomes() const;
    double getHighestSemesterScore() const;  // Method to find the highest semester score
    double getLastSemesterScore() const;     // Method to get the score of the last semester

    // Setters
    void setStudentCode(const std::string& code);
    void setFullName(const std::string& name);
    void setDateOfBirth(const std::string& dob);
    void setYearOfAdmission(int year);
    void setEntranceScore(double score);
    void setLearningOutcomes(const std::map<std::string, double>& outcomes);

    // Virtual methods
    virtual void input();
    virtual void output() const;
    virtual bool isFullTime() const = 0;

    void addLearningOutcome(const std::string& semester, double avgScore);
    double getAverageScoreBySemester(const std::string& semester) const;
    
    void display() const;
};

#endif
