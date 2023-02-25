#include "students.h"

double compute_class_score(const student & s){
    double final_grade{0.0};
    double hw_avg{0.0};
    double sum{0.0};
    int total_hws{0};
    for(auto hscore : s.hw_grades){
        sum += hscore;
        total_hws++;
    }
    hw_avg= sum/ total_hws;
    final_grade = .3 * s.midterm + .3 * s.final + .4 * hw_avg;

    return final_grade;
}

void output_data(const student & s){
    cout << s.name << " earned a " << s.final << " on their final " << endl ;
    for ( auto hscore : s.hw_grades ){
        cout << hscore << " ";
    }
}

student get_student_data(){
    student s;
    cout<< "enter the student's id. ";
    cin >> s.id;
    cout<< "enter the student's name. ";
    cin >> s.name;
    cout<< "enter the student's midterm. ";
    cin >> s.midterm;
    cout<< "enter the student's final. ";
    cin >> s.final;
    cout<< "enter the student's homework score (^D to exit). ";
    int score;
    while(cin >> score){
        s.hw_grades.push_back(score);

     }
    return s;
}