#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p)
{
    int back=n-p;
    if(back<p)
    {
        if(p%2!=0)
            return (back+1)/2;
        else
            return back/2;
    }
    else
    {
        if(p%2!=0)
            return (p-1)/2;
        else
            return p/2;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

