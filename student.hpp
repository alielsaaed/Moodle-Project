#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <string>
using namespace std;

class CStudent
{
private:
    string student_name;
    int student_ID;
    string student_email_username;
    string student_major;
    float student_grades[5];
    float student_score;
    string student_email_password;

public:
    // CStudent Class constructor
    CStudent();
    // set functions
    void setStudentName(string name);
    void setstudent_ID(int id);
    void setstudent_email_username(string email);
    void setstudent_major(string major);
    void setstudent_grades(float grades[]);
    void setstudent_score(float score);
    void setstudent_email_password(string password);
    // get functions
    string getstudent_name();
    int getstudent_ID();
    string getstudent_email_username();
    string getstudent_major();
    const float *getstudent_grades();
    float getstudent_score();
    string getstudent_email_password();
    // registerStudent function that 1) prompts the user to enter student data, and 2) stores these values for the CStudent class members.
    void registerStudent();
    // getStudentInfo function that prints the student’s data
    void getStudentInfo();
    // claculateGPA function protoype
    void claculateGPA();
};

// ************ bonus class
class CPG_Student : public CStudent
{
private:
    char pg_student_job_title[20];

public:
    void setPGStudentJobTitle(const char *newJobTitle);
    const char *getPGStudentJobTitle();
};

#endif
