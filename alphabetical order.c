#include <stdio.h>
#include <string.h>

void _print(char str[])
{
	int _l = strlen(str);
	int i, j;
	char _t;

	for (i = 0; i < _l - 1; i++)
	{
		for (j = 0; j < _l - i - 1; j++)
		{
			if (str[j] > str[j + 1])
			{

				_t = str[j];
				str[j] = str[j + 1];
				str[j + 1] = _t;
			}
		}
	}

	printf("Your Input In Alphabetical Order: %s\n", str);
}

int main()
{
	char _i_string[100];

	printf("Write Any String: ");
	scanf("%s", _i_string);

	_print(_i_string);

	return 0;
}
