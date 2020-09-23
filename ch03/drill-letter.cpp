#include "../std_lib_facilities.h"

int main()
{
    string first_name, friend_name, friend_pronoun;
    char friend_sex = 0;
    int age = 0;
    
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "Enter the age of this person: ";
    cin >> age;
    if (age<0 || age>110)
        simple_error("you're kidding!");        
    cout << "Enter the name of another friend: ";
    cin >> friend_name;
    cout << "Enter the gender of this friend (m for male, f for female):";
    cin >> friend_sex;
    
    cout << "\nDear " << first_name << ",\n";
    cout << "\nHow are you? I am very happy enjoying summer and stuff.\n";
    
    cout << "\nHave you seen "<<friend_name<<" lately? ";
    if (friend_sex == 'm')
        friend_pronoun = "him";
    else if (friend_sex == 'f')
        friend_pronoun = "her";
    else
        friend_pronoun = "it";
    cout << "If you see " << friend_pronoun << " ask " << friend_pronoun << " to call me.\n"; 

    cout << "\nI heard you just had a birthday and you are " << age << " years old.\n";
    
    if (age < 12)
        cout << "Next year you will be " << age+1 << "!\n";
    else if (age == 17)
        cout << "Next year you will be able to vote.\n";
    else if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
    
    cout << "\nYou should come home and spend a few days with us.\n";
    cout << "Please write back whenever you have time.\n";
    cout << "\nYours sincerely,\n\nJuan\n\n";
}