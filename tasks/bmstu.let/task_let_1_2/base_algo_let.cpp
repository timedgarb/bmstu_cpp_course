#include "base_algo_let.h"
#include <algorithm>

vector<int> positive_numbers(const std::vector<int>& v) {

	vector<int> newV;
	for (auto i = v.begin(); i != v.end(); ++i) {
		if (*i > 0) {
			newV.push_back(*i);
		}
	}

	return newV;
}
void sort_positive_numbers( std::vector<int>& v) {



	sort(v.begin(), v.end());

}

int sum_positive_numbers(const std::vector<int>& v)
{
	int sum = 0;
	for (auto i = v.begin(); i != v.end(); ++i)
		if (*i > 0)
			sum = sum + *i;


	return sum;
}
bool is_divisible_by_10(const std::vector<int>& v)
{
	for (auto i = v.begin(); i != v.end(); ++i)
		if (*i % 10 == 0)
	{
		return true;
	}
	return false;
}
void replace_negative_numbers(std::vector<int>& v)
{
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		if (*i < 0) {
			*i = 0;
		}
	}
	return;
}
void double_values(std::vector<int>& v)
{
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		if (*i != 0) {
			*i = *i * 2;
		}
	}

	return;
}
void sort_students_by_age(std::vector<Student>& v)
{
	std::sort(v.begin(), v.end(), compareStudents1);

	return;
}
void sort_students_by_name(std::vector<Student>& v) {
	std::sort(v.begin(), v.end(), compareStudents2);
}
bool compareStudents1(const Student& a, const Student& b) {
	return a.age < b.age;
}
bool compareStudents2(const Student& a, const Student& b) {
	return a.name < b.name;
}