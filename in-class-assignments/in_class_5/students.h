#ifndef __STUDENT_FUNCTIONS_
#define __STUDENT_FUNCTIONS_

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct student {
 int id;
 string name;
 int final;
 int midterm;
 vector<int> hw_grades;
};

student get_student_data();
double compute_class_score(const student & s);
void output_data(const student & s);

#endif