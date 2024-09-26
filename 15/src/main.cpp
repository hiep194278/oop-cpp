#include <iostream>
#include "Manager.h"
#include "FullTimeStudent.h"
#include "PartTimeStudent.h"

int main() {
    Manager manager;

    // Adding FullTime Students
    FullTimeStudent* student1 = new FullTimeStudent("FT001", "John Doe", "1999-05-21", 2020, 85.5);
    student1->addLearningOutcome("Semester 1", 7.5);
    student1->addLearningOutcome("Semester 2", 8.2);

    FullTimeStudent* student2 = new FullTimeStudent("FT002", "Alice Johnson", "2000-02-18", 2020, 89.0);
    student2->addLearningOutcome("Semester 1", 9.0);
    student2->addLearningOutcome("Semester 2", 8.8);

    FullTimeStudent* student5 = new FullTimeStudent("FT005", "Dylan Mings", "2004-01-01", 2023, 95.0);
    student2->addLearningOutcome("Semester 1", 9.0);
    student2->addLearningOutcome("Semester 2", 8.8);

    // Adding PartTime Students
    PartTimeStudent* student3 = new PartTimeStudent("PT001", "Bob Brown", "1998-09-30", 2019, 78.0, "Ha Noi");
    student3->addLearningOutcome("Semester 1", 8.5);
    student3->addLearningOutcome("Semester 2", 7.8);

    PartTimeStudent* student4 = new PartTimeStudent("PT002", "Sarah Parker", "1997-07-07", 2018, 82.0, "Hai Phong");
    student4->addLearningOutcome("Semester 1", 8.0);
    student4->addLearningOutcome("Semester 2", 8.6);

    PartTimeStudent* student6 = new PartTimeStudent("PT003", "Peter Pan", "1994-02-08", 2019, 89.0, "Ha Noi");
    student4->addLearningOutcome("Semester 1", 8.0);
    student4->addLearningOutcome("Semester 2", 7.4);

    // Adding faculties
    manager.addFaculty("Computer Science");
    manager.addFaculty("Business Administration");

    // Adding students to faculties
    manager.addStudentToFaculty("Computer Science", student1);
    manager.addStudentToFaculty("Computer Science", student2);
    manager.addStudentToFaculty("Computer Science", student5);
    manager.addStudentToFaculty("Business Administration", student3);
    manager.addStudentToFaculty("Business Administration", student4);
    manager.addStudentToFaculty("Business Administration", student6);

    // Test output of learning outcomes
    std::cout << "Average score for John Doe (Semester 2): "
              << student1->getAverageScoreBySemester("Semester 2") << std::endl;

    // Test: Total Full-Time Students in all faculties
    std::cout << "Total full-time students in all faculties: "
              << manager.getTotalFullTimeStudentsInAllFaculties() << std::endl;

    // Test: Finding student with highest entrance score in Computer Science
    Student* topStudentCS = manager.findHighestEntranceScoreStudentInFaculty("Computer Science");
    if (topStudentCS != nullptr) {
        std::cout << "Top student in Computer Science by entrance score: " << topStudentCS->getFullName() << std::endl;
    }

    // Test: Finding student with highest semester average score in Business Administration
    Student* topSemesterStudentBA = manager.findHighestSemesterScoreStudentInFaculty("Business Administration");
    if (topSemesterStudentBA != nullptr) {
        std::cout << "Top semester student in Business Administration: " << topSemesterStudentBA->getFullName() << std::endl;
    }

    // Test: List of part-time students from "Ha Noi"
    std::vector<Student*> hanoiStudents = manager.getPartTimeStudentsByLocation("Business Administration", "Ha Noi");
    std::cout << "Part-time students from Ha Noi in Business Administration: ";
    for (const auto& student : hanoiStudents) {
        std::cout << student->getFullName() << ", ";
    }
    std::cout << std::endl;

    // Test: Sorting students by type and year of admission in Computer Science
    std::cout << "\nSorting students in Computer Science by type and year of admission..." << std::endl;
    manager.sortStudentsByTypeAndYear("Computer Science");
    manager.printFacultyStudents("Computer Science");

    // Test: Students with average score above 8.0 in the last semester in Business Administration
    std::cout << "\nStudents with avg score >= 8.0 in last semester in Business Administration:" << std::endl;
    std::vector<Student*> topScorersBA = manager.getStudentsWithAvgAboveThresholdInLastSemester("Business Administration", 8.0);
    for (const auto& student : topScorersBA) {
        std::cout << student->getFullName() << std::endl;
    }

    // Test: Count students by year in Computer Science
    std::cout << "\nCount of students by year in Computer Science:" << std::endl;
    std::map<int, int> studentCountByYearCS = manager.countStudentsByYear("Computer Science");
    for (const auto& [year, count] : studentCountByYearCS) {
        std::cout << year << ": " << count << " students" << std::endl;
    }

    // Clean up allocated memory
    delete student1;
    delete student2;
    delete student3;
    delete student4;
    delete student5;
    delete student6;

    return 0;
}
