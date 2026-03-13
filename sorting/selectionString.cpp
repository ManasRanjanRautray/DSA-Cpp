#include <iostream>
#include <string>
using namespace std;

string sortString(string s)
{
    int n = s.size();

    // Selection Sort
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for(int j = i+1; j < n; j++)
        {
            if(s[j] < s[minIndex])
            {
                minIndex = j;
            }
        }

        // swap smallest with current position
        char temp = s[i];
        s[i] = s[minIndex];
        s[minIndex] = temp;
    }

    return s;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    string ans = sortString(s);

    cout << "Sorted string: " << ans;

    return 0;
}