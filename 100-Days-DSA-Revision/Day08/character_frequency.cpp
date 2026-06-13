#include <iostream>
using namespace std;

int main()
{
    string text = "PythonProgramming";
    for (int i = 0; i < text.size(); i++)
    {
        bool alreadyCounted = false;
        for (int k = 0; k < i; k++)
        {
            if (text[i] == text[k])
            {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted)
        {
            continue;
        }

        int count = 0;

        for (int j = 0; j < text.size(); j++)
        {
            if (text[i] == text[j])
            {
                count++;
            }
        }
        cout << text[i] << "->" << count << endl;
    }
    return 0;
}
