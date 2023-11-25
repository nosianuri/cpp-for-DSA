#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    std::string name;
    int cls;
    char section;
    int id;
};

int main() {
    int N;
    std::cin >> N;

    if (N < 1 || N > 100) {
        std::cout << "Invalid number of students." << std::endl;
        return 1;
    }

    Student* students = new Student[N];

    for (int i = 0; i < N; ++i) {
        std::cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;

        if (students[i].name.length() < 1 || students[i].name.length() > 100) {
            std::cout << "Invalid length of student name." << std::endl;
            return 1;
        }

        if (students[i].cls < 1 || students[i].cls > 10 || students[i].section < 'A' || students[i].section > 'Z' || students[i].id < 1 || students[i].id > 100) {
            std::cout << "Invalid input for student " << i + 1 << "." << std::endl;
            return 1;
        }
    }

    for (int i = 0; i < N / 2; ++i) {
        std::swap(students[i].section, students[N - 1 - i].section);
    }

    for (int i = 0; i < N; ++i) {
        std::cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << std::endl;
    }

    delete[] students;
    return 0;
}