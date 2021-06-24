/**
 * _isupper - checks for uppercase character
 * @c: integer character being checked
 *
 * Description: Function takes a character and determine if it is uppercase
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int i;
	int ret;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			ret = 1;
			break;
		}
		else
		{
			ret = 0;
		}
	}
	return (ret);
}



