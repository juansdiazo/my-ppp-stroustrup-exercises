#include "../std_lib_facilities.h"

int main()
{
	string name,lastname;
        int age, year_born;
	const int year_now=2020;
	cout<<"Enter name, lastname and age, separated with a space and then press enter\n";
	cin>>name>> lastname >> age;
        year_born = year_now - age;
	cout<<"Your full name is "<<name<<" "<<lastname<<" and you were born in "<<year_born<<", if you already had your birthday in this "<<year_now<<std::endl;
}
