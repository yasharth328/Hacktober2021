#include <bits/stdc++.h>
using namespace std;

int solution(string &S)
{
    int n = S.size();

    int count = 1;
    vector<int> Index(256, -1);
    for (int j = 0; j < n; j++)
    {
        if (Index[S[j]] >= 0)
        {
            count++;
            fill(Index.begin(), Index.end(), -1);
            Index[S[j]] = j;
        }
        else
        {
            Index[S[j]] = j;
        }
    }
    return count;
}
int main()
{
    string s;
    cin >> s;
    cout << solution(s);
    return 0;
}