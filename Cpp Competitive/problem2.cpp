#include<bits/stdc++.h>
using namespace std;
/*
Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.
*/
/*
int main () {
    string a,b;
    cin >> a >> b; 

    cout << a.size() << " " << b.size() << endl ;
    cout << a + b << endl; 
    swap(a[0], b[0]) ;
    cout << a << " " << b << endl;
}
*/

// QUESTION 2 : REVERSE A STRING 
/*
int main() {
    string s ;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}
*/

/* QUESTION 3 :
Problem
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 

Note
String S consists of lowercase English Alphabets only.
*/
/*
int main() {
    string s, s1 ;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        s1.push_back(s[i]) ;
    }
    if(s1 == s) {
        cout << "YES" ;
    } else {
        cout << "NO";
    }
}
*/

/* QUESTION 4 :
Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).
*/
/*
int main() {
    string a,b ;
    cin >> a >> b; 
    string temp = "";

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if(b[j] == a[i]) {
                a[i] = a[i] - b[j];
            }
        }
        
    }
    cout << a;
}
*/

// QUESTION 5 :
/*You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.
*/
/*
int main() {
    string s;
    cin >> s;
    string temp = "";
    char s1,s2;
    string s3 = "al";
    s1 = 'G';
    s2 = 'o';

    for(int i = 0; i<s.size(); i++) {
        int j = i+1;
        if(s[i] == 'G')
        temp.push_back(s1);
        if(s[i] == '(' && s[j] == ')')
        temp.push_back(s2);
        if(s[i] == '(' && s[j] == 'a')
        temp += s3;

    }
    cout << temp;
}
*/

// QUESTION 6 :
/*
You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

'A': Absent.
'L': Late.
'P': Present.
The student is eligible for an attendance award if they meet both of the following criteria:

The student was absent ('A') for strictly fewer than 2 days total.
The student was never late ('L') for 3 or more consecutive days.
Return true if the student is eligible for an attendance award, or false otherwise.
*/
/*
string lowerCase(string s) {
     string lc = "";
    for (int i = 0; i < s.size(); i++)
    {
        lc += tolower(s[i]);
    }
    return lc;
}
int main() {
    string s ;
    getline(cin, s);
    int countP = 0, countA = 0, countL = 0;
    string s1 = lowerCase(s);
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == 'a') {
            if(++countA > 2 ) {
                return false;
            } 
            countL = 0;
        }
        else if(s1[i] == 'l') {
            if(++countL > 3) {
                return false ;
            }
            }

    }
    if(countA < 2 && countL < 3) {
        cout << "true" ;
    } else cout << "false";
}
*/

// QUESTION 7 :
/*
Soma is a fashionable girl. She absolutely loves shiny stones that she can put on as jewellery accessories. She has been collecting stones since her childhood - now she has become really good with identifying which ones are fake and which ones are not. Her King requested for her help in mining precious stones, so she has told him which all stones are jewels and which are not. Given her description, your task is to count the number of jewel stones. More formally, you're given a string J composed of latin characters where each character is a jewel. You're also given a string S composed of latin characters where each character is a mined stone. You have to find out how many characters of S are in J as well.

Input
First line contains an integer T denoting the number of test cases. Then follow T test cases. Each test case consists of two lines, each of which contains a string composed of English lower case and upper characters. First of these is the jewel string J and the second one is stone string S. You can assume that 1 <= T <= 100, 1 <= |J|, |S| <= 100

Output
Output for each test case, a single integer, the number of jewels mined.
*/
/*
int main() {
    int t ;
    cin >> t;
    while(t--) {
        string a,b;
        cin >> a >> b;
        string temp = "";

      for (int i = 0; i < b.size(); i++)
        {
            bool isVisited = 0;
            for (int j = 0; j < a.size(); j++)
            {
                if(b[i] == a[j]) {
                    isVisited = 1;
                }
            }
            if(isVisited) temp.push_back(b[i]);
        }
                cout << temp.size()<< endl;
    }
}
*/