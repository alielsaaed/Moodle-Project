#include "student.hpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// constructor function
CStudent::CStudent()
{
    this->student_name = '\0';
    this->student_ID = 0;
    this->student_email_username = '\0';
    this->student_major = '\0';
    for (int i = 0; i < 5; i++)
    {
        this->student_grades[i] = 0.0;
    }
    this->student_score = 0.00;
    this->student_email_password = '\0';
}
//******************************* Set and Get Functions *******************
void CStudent::setStudentName(string name)
{
    this->student_name = name;
}
string CStudent::getstudent_name()
{
    return student_name;
}
void CStudent::setstudent_ID(int id)
{
    student_ID = id;
}
int CStudent::getstudent_ID()
{
    return student_ID;
}
void CStudent::setstudent_email_username(string email)
{
    student_email_username = email;
}
string CStudent::getstudent_email_username()
{
    return student_email_username;
}
void CStudent::setstudent_major(string major)
{
    student_major = major;
}
string CStudent::getstudent_major()
{
    return student_major;
}
void CStudent::setstudent_grades(float grades[])
{
    for (int i = 0; i < 5; i++)
    {
        this->student_grades[i] = grades[i];
    }
}
const float *CStudent::getstudent_grades()
{
    return student_grades;
}
void CStudent::setstudent_score(float score)
{
    student_score = score;
}
float CStudent::getstudent_score()
{
    return student_score;
}
void CStudent::setstudent_email_password(string password)
{
    student_email_password = password;
}
string CStudent::getstudent_email_password()
{
    return student_email_password;
}

// registerStudent function that 1) prompts the user to enter student data, and 2) stores these values for the CStudent class members.
void CStudent::registerStudent()
{
    
    cout << "\n Please enter student name:  ";
    cin >> student_name;
    cout << "\n Please enter student id:  ";
    cin >> student_ID;
    cout << "\n Please enter student email:  ";
    cin >> student_email_username;
    cout << "\n Please enter student major:  ";
    cin >> student_major;
    for (int i = 0; i < 5; i++)
    {
        cout << "\n Enter student grade " << i + 1 << ": ";
        cin >> student_grades[i];
    }
    // CStudent::claculateGPA();
    cout << "\n Please enter student password:  ";
    cin >> student_email_password;
}
// getStudentInfo function that prints the student’s data
void CStudent::getStudentInfo()
{
    
    cout <<"\n student Info:\n" ;
    cout <<"\n student Name: " << student_name << endl;
    cout << "\n student ID: " <<student_ID << endl;
    cout << "\n student Email: " <<student_email_username << endl;
    cout << "\n student Major: " <<student_major << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "student Grades " << i+1 <<": " <<student_grades[i] << "\n";
    }
    cout << "\n Score is : ";
    cout << student_score << endl;
    cout << "\n student Password: " <<student_email_password << endl;
    ofstream Myfile("output.txt");
    Myfile << getStudentInfo();
    Myfile.close();
}
// claculateGPA function that sums the items of student_grades[5] and divide the
//  sum over 100 and assign the result to the student_score variable
void CStudent::claculateGPA()
{
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += student_grades[i];
    }
    student_score = sum / 100;
}

// ************** bonus class

void CPG_Student::setPGStudentJobTitle(const char *newJobTitle)
{
    strncpy(pg_student_job_title, newJobTitle, sizeof(pg_student_job_title) - 1);
    pg_student_job_title[sizeof(pg_student_job_title) - 1] = '\0';
}

const char * CPG_Student::getPGStudentJobTitle()
{
    return pg_student_job_title;
}

