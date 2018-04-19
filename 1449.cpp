#include <iostream>
#include <map>
#include <string.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
    map<string, string> music;
    map<string, string>::iterator it = music.begin();
    int T, M, N, i, j, k;
    string original, traducao;
    char *temp, input[80];

    cin >> T >> M >> N;
    getchar();

    for(i = 0; i < T; ++i)
    {
        for(j = 0; j < M; ++j)
        {
            getline(cin, original);
            getline(cin, traducao);
            music.insert(it, pair<string, string> (original, traducao));
        }
        do
        {
            cin.getline(input, 80);
            temp = strtok(input, " ");
            while(temp != NULL)
            {
                cout << "while temp\n";
                for(it = music.begin(); it != music.end(); ++it)
                {
                    cout << temp << endl;
                    /*if(it->first == temp)
                        cout << it->second;
                    else
                        cout << temp;*/

                }
                temp = strtok(NULL, " ");
            }
            ++k;
            cout << endl;
        }
        while(k < N);
    }
    return 0;
}
