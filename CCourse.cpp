#include "CCourse.hpp"

#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;

void CCourse::setCourseName(string name)
{
    // i used -> because i was using pointer in the function
    this->course_name = name;
}

void CCourse::setCourseCode(string code)
{
    this->course_code=code;
}

void CCourse::setCourseCost(float cost)
{
    this->course_cost=cost;
}

string CCourse::getCourseName()
{
    return course_name;
}

string CCourse::getCourseCode()
{
    return course_code;
}

float CCourse::getCourseCost()
{
    return course_cost;
}

// check this

void CCourse::AddCourse()
{
    cout << "\n Please enter course name:  ";
    cin >> course_name;
    cout << "\n Please enter course code:  ";
    cin >> course_code;
    cout << "\n Please enter course cost:  ";
    cin >> course_cost;
    
}

void CCourse::getCourseInfo()
{
    cout << "\n Course Name: " << getCourseName() << endl;
    cout << "\n Course Code: " << getCourseCode() << endl;
    cout << "\n Course Cost: " << getCourseCost() << endl;
}

