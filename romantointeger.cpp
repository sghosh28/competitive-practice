// roman numericals to integer

#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> umap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};
    int sum = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        int next = umap[s[i + 1]];
        int current = umap[s[i]];
        if (current < next)
        {
            sum += next - current;
            i++;
        }
        else
            sum += current;
        i++;
    }
    return sum;
}

int main()
{
    cout << romanToInt("MCMXCIV");
}