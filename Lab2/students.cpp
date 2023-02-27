#include "students.h"
#include <cstring>

void Student::SetName(const char *nume)
{
    this->name = new char[strlen(nume + 1)];
    strcpy(this->name, nume);
}

char *Student::GetName()
{
    return this->name;
}

bool Student::SetGradeMath(float x)
{
    if (x < 1 or x > 10)
        return false;
    this->MathGrade = x;
    return true;
}

float Student::GetGradeMath()
{
    return this->MathGrade;
}
bool Student::SetGradeEnglish(float x)
{
    if (x < 1 or x > 10)
        return false;
    this->EnglishGrade = x;
    return true;
}
float Student::GetGradeEnglish()
{
    return this->EnglishGrade;
}
bool Student::SetGradeHistory(float x)
{
    if (x < 1 or x > 10)
        return false;
    this->HistoryGrade = x;
    return true;
}

float Student::GetGradeHistory()
{
    return this->HistoryGrade;
}

float Student::GetAverageGrade()
{
    return (this->MathGrade + this->EnglishGrade + this->HistoryGrade) / 3;
}