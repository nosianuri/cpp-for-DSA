#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool compareStudents(const Student& a, const Student& b) {
    if (a.total_marks == b.total_marks) {
        return a.id < b.id;
    }
    return a.total_marks > b.total_marks;
}

int main() {
    int N;
    cin >> N;
    Student* students = new Student[N];
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
        students[i].total_marks = students[i].math_marks + students[i].eng_marks;
    }

    sort(students, students + N, compareStudents);
    for (int i = 0; i < N; ++i) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }
    delete[] students;
    return 0;
}

