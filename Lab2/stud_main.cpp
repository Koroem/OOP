#include "students.h"
#include "Globale.h"
#include <iostream>

using namespace std;

int main()
{

    Student s1, s2, s3, s4;
    s1.SetName("Student1");
    s2.SetName("Student2");
    s3.SetName("Student3");
    s4.SetName("Student4");
    for (int c1 = 0; c1 < 4; c1++)
    {
        switch (c1)
        {
        case 0:
            s1.SetGradeEnglish(1.5);
            s1.SetGradeHistory(2);
            s1.SetGradeMath(3.5);
            break;
        case 1:
            s2.SetGradeEnglish(4);
            s2.SetGradeHistory(4.5);
            s2.SetGradeMath(6);
            break;
        case 2:
            s3.SetGradeEnglish(6.5);
            s3.SetGradeHistory(7);
            s3.SetGradeMath(8.525);
            break;
        case 3:
            s4.SetGradeEnglish(7.252);
            s4.SetGradeHistory(10);
            s4.SetGradeMath(1);
        }
    }
    cout << s1.GetName() << endl;
    cout << s2.GetName() << endl;
    cout << s3.GetName() << endl;
    cout << s4.GetName() << endl;

    cout << s1.GetGradeEnglish() << " " << s1.GetGradeHistory() << " " << s1.GetGradeMath() << " " << s1.GetAverageGrade() << endl;
    cout << s2.GetGradeEnglish() << " " << s2.GetGradeHistory() << " " << s2.GetGradeMath() << " " << s2.GetAverageGrade() << endl;
    cout << s3.GetGradeEnglish() << " " << s3.GetGradeHistory() << " " << s3.GetGradeMath() << " " << s3.GetAverageGrade() << endl;
    cout << s4.GetGradeEnglish() << " " << s4.GetGradeHistory() << " " << s4.GetGradeMath() << " " << s4.GetAverageGrade() << endl;

    cout << CompareName(s1, s2) << endl;
    cout << CompareAverage(s1, s2) << endl;
    cout << CompareEnglish(s3, s1) << endl;
    cout << CompareHistory(s3, s2) << endl;
    cout << CompareMath(s3, s2) << endl;
    return 0;
}