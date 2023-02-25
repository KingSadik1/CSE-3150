#include "students.h"

int main(){
    student s;
    s = get_student_data();
    double final_grade = compute_class_score(s);
    output_data(s);
    cout << "your final grade is " << final_grade << endl;
    return 0;
}