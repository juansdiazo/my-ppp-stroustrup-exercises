#include "../std_lib_facilities.h"
int main()
{
    string word1, word2, word3;
    cout << "Enter 3 words separated by space: ";
    cin >> word1 >> word2 >> word3;
    cout << "In ordered sequence: ";
    if (word1<=word2 && word1<=word3)
    {
        if (word2<=word3)
        {
            cout << word1 << ", " << word2 << ", " << word3;
        }
        else
        {
            cout << word1 << ", " << word3 << ", " << word2;
        }
    }    
    else if (word2<=word1 && word2<=word3)
    {
        if (word1<=word3)
        {
            cout << word2 << ", " << word1 << ", " << word3;
        }
        else
        {
            cout << word2 << ", " << word3 << ", " << word1;
        }
    }
    else if (word3<=word1 && word3<=word2)
    {
        if (word1<=word2)
        {
            cout << word3 << ", " << word1 << ", " << word2;
        }
        else
        {
            cout << word3 << ", " << word2 << ", " << word1;
        }
    }
    cout << '\n';
}