#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    std::string name;
    char section;
    int totalMarks;
};

int compareStudents(const Student &a, const Student &b) {
    if (a.totalMarks != b.totalMarks) {
        return a.totalMarks > b.totalMarks;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 1; t <= T; ++t) {
        std::vector<Student> students(3);

        for (int i = 0; i < 3; ++i) {
            std::cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }

        std::sort(students.begin(), students.end(), compareStudents);

        std::cout << students[0].id << " " << students[0].name << " " << students[0].section << " " << students[0].totalMarks << std::endl;
    }

    return 0;
}