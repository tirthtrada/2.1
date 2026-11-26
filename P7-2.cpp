#include <iostream>
#include <string>
using namespace std;

int main()
{
    string paragraph, sentence, updated;
    string firstWord, lastWord, searchWord, palindrome;
    string upper, lower, rev, copyText;
    string text1, text2;

    int characters = 0, words = 0, alphabets = 0;
    int digits = 0, special = 0;

    cout << "----------------------------------------" << endl;
    cout << "        DOCUMENT TEXT ANALYZER" << endl;
    cout << "----------------------------------------" << endl;

    cout << "\nEnter Paragraph" << endl;
    getline(cin, paragraph);

    cout << "\nText Analysis" << endl;

    for (int i = 0; i < paragraph.length(); i++)
    {
        characters++;

        if ((paragraph[i] >= 'A' && paragraph[i] <= 'Z') ||
            (paragraph[i] >= 'a' && paragraph[i] <= 'z'))
        {
            alphabets++;
        }
        else if (paragraph[i] >= '0' && paragraph[i] <= '9')
        {
            digits++;
        }
        else if (paragraph[i] != ' ')
        {
            special++;
        }
    }

    if (paragraph.length() > 0)
        words = 1;

    for (int i = 0; i < paragraph.length(); i++)
    {
        if (paragraph[i] == ' ')
            words++;
    }

    cout << "\nCharacters : " << characters << endl;
    cout << "Words      : " << words << endl;
    cout << "Alphabets  : " << alphabets << endl;
    cout << "Digits     : " << digits << endl;
    cout << "Special Characters : " << special << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "\nString Extraction" << endl;

    int space = paragraph.find(' ');
    firstWord = paragraph.substr(0, space);

    int lastSpace = paragraph.rfind(' ');
    lastWord = paragraph.substr(lastSpace + 1);

    cout << "\nFirst Word     : " << firstWord << endl;
    cout << "Last Word      : " << lastWord << endl;
    cout << "First Character : " << paragraph[0] << endl;
    cout << "Last Character  : " << paragraph[paragraph.length() - 1] << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "\nConcatenation" << endl;

    cout << "\nEnter Additional Sentence" << endl;
    getline(cin, sentence);

    updated = paragraph + "\n" + sentence;

    cout << "\nUpdated Paragraph" << endl;
    cout << updated << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "\nPattern Matching" << endl;

    cout << "\nEnter Search Word : ";
    cin >> searchWord;

    int position = updated.find(searchWord);

    if (position != string::npos)
    {
        cout << "\nKeyword Found" << endl;
        cout << "First Occurrence Position : " << position << endl;
    }
    else
    {
        cout << "\nKeyword Not Found" << endl;
    }

    cout << "\n----------------------------------------" << endl;
    cout << "\nString Transformation" << endl;

    upper = updated;
    lower = updated;

    for (int i = 0; i < updated.length(); i++)
    {
        if (updated[i] >= 'a' && updated[i] <= 'z')
            upper[i] = updated[i] - 32;

        if (updated[i] >= 'A' && updated[i] <= 'Z')
            lower[i] = updated[i] + 32;
    }

    cout << "\nUppercase" << endl;
    cout << upper << endl;

    cout << "\nLowercase" << endl;
    cout << lower << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "\nReverse" << endl;

    rev = "";

    for (int i = updated.length() - 1; i >= 0; i--)
    {
        rev = rev + updated[i];
    }

    cout << rev << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "\nPalindrome Check" << endl;

    cout << "\nEnter Word : ";
    cin >> palindrome;

    rev = "";

    for (int i = palindrome.length() - 1; i >= 0; i--)
    {
        rev = rev + palindrome[i];
    }

    if (palindrome == rev)
        cout << "\nResult: Palindrome" << endl;
    else
        cout << "\nResult: Not Palindrome" << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "\nStandard String Functions" << endl;

    cout << "\nLength : " << updated.length() << endl;

    copyText = updated;
    cout << "String Copied Successfully" << endl;

    text1 = "Hello";
    text2 = "Hello";

    if (text1 == text2)
        cout << "Comparison Result : Equal" << endl;
    else
        cout << "Comparison Result : Not Equal" << endl;

    text1 = text1 + " World";
    cout << "Concatenation : Successful" << endl;

    if (updated.find(sentence) != string::npos)
        cout << "Substring Search : Found" << endl;

    text1.swap(text2);
    cout << "Swapping : Successful" << endl;

    return 0;
}
