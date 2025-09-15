#include <iostream>
using namespace std;
// a function to perform naive search of pattern in text
int naiveSearch(string &text, string &pattern)
{
    // size of text and pattern
    int n = text.size();
    int m = pattern.size();

    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        // Compare the pattern with the substring of text
        for (; j < m && text[i + j] == pattern[j]; j++);
        // If all characters match, return the starting index
        if (j == m)
        {
            return i;
        }
    }
    // Return -1 if no match is found
    return -1;
}

int main()
{
    string text = "helloworld";
    // Test Case 1: Pattern at the beginning
    string pattern1 = "hello";
    cout << "Test Case 1: ";
    cout << (naiveSearch(text, pattern1)) << endl;

    // Test Case 2: Pattern at the end
    string pattern2 = "world";
    cout << "Test Case 2: ";
    cout << (naiveSearch(text, pattern2)) << endl;

    // Test Case 3: Pattern not present
    string pattern3 = "abc";
    cout << "Test Case 3: ";
    cout << (naiveSearch(text, pattern3)) << endl;

    // Test Case 4: Empty pattern
    string pattern4 = "";
    cout << "Test Case 4: ";
    cout << (naiveSearch(text, pattern4)) << endl;

     string pattern5 = "helmeow";
    cout << "Test Case 5: ";
    cout << (naiveSearch(text, pattern5)) << endl;

    return 0;
}
