#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s)
{
    int l=0, e=0, count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='D')
        {
            l--;
            if(l<0)
                e=1;
        }
        else
        {
            l++;
            if(l>=0&&e==1)
            {
                count++;
                e=0;
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

