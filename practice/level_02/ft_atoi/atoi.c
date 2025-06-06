#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;

	while(str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
	{
		i++;
	}
	int sign = 1;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	long int r = 0;
	
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	
	return (r * sign);
}

int main()
{
	printf("=== ft_atoi Test Cases ===\n");
	printf("ft_atoi(\"   42\") = %d\n", ft_atoi("   42"));
	printf("ft_atoi(\"  -42\") = %d\n", ft_atoi("  -42"));
	printf("ft_atoi(\"42abc\") = %d\n", ft_atoi("42abc"));
	printf("ft_atoi(\"   +123\") = %d\n", ft_atoi("   +123"));
	printf("ft_atoi(\"--42\") = %d (should be 0)\n", ft_atoi("--42"));
	printf("ft_atoi(\"+-42\") = %d (should be 0)\n", ft_atoi("+-42"));
	printf("ft_atoi(\"0\") = %d\n", ft_atoi("0"));
	printf("ft_atoi(\"\") = %d\n", ft_atoi(""));
	return 0;
}
