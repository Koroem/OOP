#include "students.h"
#include "Globale.h"
#include <cstring>

int CompareName(Student &a, Student &b)
{
	if (strcmp(a.GetName(), b.GetName()) == 0)
		return 0;
	else if (strcmp(a.GetName(), b.GetName()) > 0)
		return 1;
	else
		return -1;
}

int CompareMath(Student &a, Student &b)
{
	if (a.GetGradeMath() < b.GetGradeMath())
		return -1;
	if (a.GetGradeMath() > b.GetGradeMath())
		return 1;
	return 0;
}

int CompareEnglish(Student &a, Student &b)
{
	if (a.GetGradeEnglish() < b.GetGradeEnglish())
		return -1;
	if (a.GetGradeEnglish() > b.GetGradeEnglish())
		return 1;
	return 0;
}

int CompareHistory(Student &a, Student &b)
{
	if (a.GetGradeHistory() < b.GetGradeHistory())
		return -1;
	if (a.GetGradeHistory() > b.GetGradeHistory())
		return 1;
	return 0;
}

int CompareAverage(Student &a, Student &b)
{
	if (a.GetAverageGrade() < b.GetAverageGrade())
		return -1;
	if (a.GetAverageGrade() > b.GetAverageGrade())
		return -1;
	return 0;
}