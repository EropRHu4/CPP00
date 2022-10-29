#include <iostream>

using namespace std;

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch - 32);
	return (ch);
}

int main(int argc, char* argv[])
{
    int i;
    int j;

    i = 1;
    if (argc <= 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] != 34)
                {
                    argv[i][j] = toupper(argv[i][j]);
                    cout << argv[i][j];
                }
                j++;
            }
            cout << " ";
            i++;
        }
        cout << endl;
    }
    return (0);
}
