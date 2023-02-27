#pragma once
class Student
{
    char *name;
    float MathGrade;
    float EnglishGrade;
    float HistoryGrade;

public:
    void SetName(const char *nume);
    char *GetName();
    bool SetGradeMath(float x);
    float GetGradeMath();
    bool SetGradeEnglish(float x);
    float GetGradeEnglish();
    bool SetGradeHistory(float x);
    float GetGradeHistory();
    float GetAverageGrade();
};
