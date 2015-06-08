/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 14:15:15 by mroux             #+#    #+#             */
/*   Updated: 2015/06/08 18:07:40 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int		main()
{
	printf("----------------------------------------------\n");
	printf("ft_isascii test\n");

	int		i = 0;
	int		ret = 0;

	while (i <= 255)
	{
		ret = ft_isascii(i);
		if (ret == 1) {
			printf("Valeur ascii de %d : ", i);
			printf("%d\n", ft_isascii(i));
		}
		i++;
	}

	printf("----------------------------------------------\n");
	printf("ft_isdigit test\n");

	i = 0;
	ret = 0;
	while (i <= 255)
	{
		ret = ft_isdigit(i);
		if (ret == 1) {
			printf("Valeur ascii de %d : ", i);
			printf("%d\n", ft_isdigit(i));
		}
		i++;
	}

	printf("----------------------------------------------\n");
	printf("ft_isalpha test\n");

	i = 0;
	ret = 0;
	while (i <= 255)
	{
		ret = ft_isalpha(i);
		if (ret == 1) {
			printf("Valeur ascii de %d : ", i);
			printf("%d\n", ft_isalpha(i));
		}
		i++;
	}

	printf("----------------------------------------------\n");
	printf("ft_isprint test\n");

	i = 0;
	ret = 0;
	while (i <= 255)
	{
		ret = ft_isprint(i);
		if (ret == 1) {
			printf("Valeur ascii de %d : ", i);
			printf("%d\n", ft_isprint(i));
		}
		i++;
	}

	printf("----------------------------------------------\n");
	printf("ft_isalnum test\n");

	i = 0;
	ret = 0;
	while (i <= 255)
	{
		ret = ft_isalnum(i);
		if (ret == 1) {
			printf("Valeur ascii de %d : ", i);
			printf("%d\n", ft_isalnum(i));
		}
		i++;
	}

	printf("----------------------------------------------\n");
	printf("ft_toupper test\n");

	i = 0;
	ret = 0;
	while (i <= 255)
	{
		ret = ft_toupper(i);
		printf("Valeur ascii de %d : ", i);
		printf("%d\n", ft_toupper(i));
		i++;
	}

	printf("----------------------------------------------\n");
	printf("ft_tolower test\n");

	i = 0;
	ret = 0;
	while (i <= 255)
	{
		ret = ft_tolower(i);
		printf("Valeur ascii de %d : ", i);
		printf("%d\n", ft_tolower(i));
		i++;
	}

	printf("----------------------------------------------\n");
	printf("ft_bzero test\n");

	char	test1[] = "123456789";
	char	test2[] = "\n";
	char	test3[] = "";

	printf("Before : %s\n", test1);
	printf("Before (\\n test here) : %s\n", test2);
	printf("Before (empty string test) : %s\n", test3);
	ft_bzero(test1, 10);
	ft_bzero(test2, 1);
	ft_bzero(test3, 0);
	printf("After (if it's empty, it's good) : %s\n", test1);
	printf("After (if it's empty, it's good) : %s\n", test2);
	printf("After (if it's empty, it's good) : %s\n", test3);

	printf("----------------------------------------------\n");
	printf("ft_puts test\n");

	ft_puts("Ceci est un test\n");

	printf("ft_puts with NULL : ");
	ft_puts(NULL);
	printf("\n");

	printf("----------------------------------------------\n");
	printf("ft_strlen test\n");

	int a1 = 0;
	int a2 = 0;

	int b1 = 0;
	int b2 = 0;

	int c1 = 0;
	int c2 = 0;

	int d1 = 0;
	int d2 = 0;

	int e1 = 0;
	int e2 = 0;

	a1 = ft_strlen("1234567890");
	a2 = strlen("1234567890");
	printf("%d = %d\n", a1, a2);

	b1 = ft_strlen("");
	b2 = strlen("");
	printf("%d = %d\n", b1, b2);

	c1 = ft_strlen("0123");
	c2 = strlen("0123");
	printf("%d = %d\n", c1, c2);

	d1 = ft_strlen("pommedeterre");
	d2 = strlen("pommedeterre");
	printf("%d = %d\n", d1, d2);

	e1 = ft_strlen("   iu34   gti34hog34h0ug34iyf3480g83h8gj9340hg348j0g34ipjg3490jg340");
	e2 = strlen("   iu34   gti34hog34h0ug34iyf3480g83h8gj9340hg348j0g34ipjg3490jg340");
	printf("%d = %d\n", e1, e2);

	printf("----------------------------------------------\n");
	printf("ft_strcat test\n");

	char		buf[9];

	ft_bzero(buf, 9);
	ft_strcat(buf, "bon");
	printf("0 != %d\n", strcmp(buf, "bonjour"));
	ft_strcat(buf, "jour");
	printf("0 = %d\n", strcmp(buf, "bonjour"));

	ft_bzero(buf, 9);
	ft_strcat(buf, "toto");
	printf("0 != %d\n", strcmp(buf, "bonjour"));

	ft_bzero(buf, 9);
	ft_strcat(buf, "Br");
	printf("0 != %d\n", strcmp(buf, "bonjour"));

	printf("----------------------------------------------\n");
	printf("ft_memset test\n");

	char	str[100];
	char	str1[] = "george";
	char	str2[] = "B o r n a r d";

	printf("Str : %s\n", str);
	ft_memset(str, 't', 5);
	printf("Fill : %s\n", str);

	printf("Str1 : %s\n", str1);
	ft_memset(str1, 'K', 3);
	printf("Fill : %s\n", str1);

	printf("Str2 : %s\n", str2);
	ft_memset(str2, 'c', 2);
	printf("Fill : %s\n", str2);

	printf("----------------------------------------------\n");
	printf("ft_memcpy test\n");

	char	dst[] = "Ceci est un test";
	char	src[] = "Rajouter";

	printf("dst : %s\n", dst);
	printf("src : %s\n", src);
	ft_memcpy(dst, src, 8);
	printf("Result : %s\n", dst);

	printf("----------------------------------------------\n");
	printf("ft_strdup test\n");

	char	*a;
	char	*c;

	a = "";
	c = "MROUXISTHEKING";

	printf("Before : %s\n", a);
	a = ft_strdup(a, ft_strlen(a));
	printf("After : %s\n", a);

	printf("Before : %s\n", c);
	c = ft_strdup(c, ft_strlen(c));
	printf("After : %s\n", c);

	printf("----------------------------------------------\n");
	printf("ft_strcat test\n");

	int		fd;

	fd = open("auteur", S_IRUSR);
	//printf("%d\n", fd);
	ft_cat(fd);
	close(fd);

	printf("##############____________####################\n");
	printf("##############_BONUS AREA_####################\n");
	printf("##############_RESTRICTED_####################\n");
	printf("##############____________####################\n");
	
	printf("----------------------------------------------\n");
	printf("ft_putstr test\n");
	ft_putstr("Make it rain les bonus\n");

	printf("----------------------------------------------\n");
	printf("ft_isspace test\n");
	printf("1 = %d\n", ft_isspace(9));
	printf("1 = %d\n", ft_isspace(13));
	printf("1 = %d\n", ft_isspace(32));
	printf("0 = %d\n", ft_isspace(96));

	printf("----------------------------------------------\n");
	printf("ft_ishastag test\n");
	printf("1 = %d\n", ft_ishastag(35));
	printf("0 = %d\n", ft_ishastag(20));
	printf("0 = %d\n", ft_ishastag(666));
	printf("0 = %d\n", ft_ishastag(42));

	printf("##############____________####################\n");
	printf("##############_BONUS AREA_####################\n");
	printf("##############_RESTRICTED_####################\n");
	printf("##############____________####################\n");

	return (0);
}
