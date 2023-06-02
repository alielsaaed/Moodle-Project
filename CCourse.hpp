#ifndef COURSE
#define COURSE

#include <iostream>
#include <string>
using namespace std;


class CCourse
{
private:
    string course_name;
    string course_code;
    float course_cost;

public:
    void setCourseName(string name);
    void setCourseCode(string code);
    void setCourseCost(float cost);
    string getCourseName() ;
    string getCourseCode() ;
    float getCourseCost() ;
    // check this
    void AddCourse();
    void getCourseInfo();

};



#endif
