/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:47:57 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/15 23:45:38 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // test.c
// #include <stdio.h>
// #include <limits.h>
// int	ft_printf(const char *fmt, ...);

// int main(void)
// {
//  int rev = 0;
// 	char *str;
	// // nomal string test
	// printf("case 1 \n");
	// rev = printf("|abcdef|");
	// printf("   |return value: %d|\n", rev);
	// rev = ft_printf("|abcdef|");
	// printf("   |return value: %d|\n", rev);

	// printf("case 2 \n");
	// rev = printf("||");
	// printf("   |return value: %d|\n", rev);
	// rev = ft_printf("||");
	// printf("   |return value: %d|\n", rev);

	// // char test
	// printf("case 1 \n");
	// rev = printf("|abc%cdef|", '0');
	// printf("   |return value: %d|\n", rev);
	// rev = ft_printf("|abc%cdef|", '0');
	// printf("   |return value: %d|\n", rev);

	// printf("case 2 \n");
	// rev = printf("|abc%5cdef|", 'X');
	// printf("   |return value: %d|\n", rev);
	// rev = ft_printf("|abc%5cdef|", 'X');
	// printf("   |return value: %d|\n", rev);

	// printf("case 3 \n");
	// rev = printf("|abc%-5cdef|", 'X');
	// printf("   |return value: %d|\n", rev);
	// rev = ft_printf("|abc%-5cdef|", 'X');
	// printf("   |return value: %d|\n", rev);

	// printf("case 4 \n");
	// rev = printf("|abc%0+ #-10.5cdef|", 'X');
	// printf("   |return value: %d|\n", rev);
	// rev = ft_printf("|abc%0+ #-10.5cdef|", 'X');
	// printf(" |return value: %d|\n", rev);

	// //dec test
	// rev = ft_printf("abc%ddef\n", 10);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%4ddef\n", 12);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%-4ddef\n", 12);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%04ddef\n", 12);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%10.5ddef\n", 12);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%0-10.5ddef\n", 12);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%0-+10.5ddef\n", 12);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%.0ddef\n", 12);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%.0ddef\n", 0);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%+15.5def\n", INT_MIN);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%-010def\n", 100);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc% def\n", -100);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc% def\n", 100);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc%+ def\n", 100);
	// ft_printf("rev: %d\n", rev);
	// rev = printf("+%5d+\n", 200);
	// rev = ft_printf("+%5d+\n", 200);
	// rev = printf("+%05d+\n", 200);
	// rev = ft_printf("+%05d+\n", 200);
	// rev = printf("+%-05d+\n", 200);
	// rev = ft_printf("+%-05d+\n", 200);
	// rev = printf("+%010.6d+\n", 200);
	// rev = ft_printf("+%010.6d+\n", 200);
	// rev = printf("+%0.6d+\n", 200);
	// rev = ft_printf("+%0.6d+\n", 200);
	// rev = printf("+%-010.6d+\n", 200);
	// rev = ft_printf("+%-010.6d+\n", 200);
	// rev = ft_printf("abc% ddef\n", 10);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc% ddef\n", -10);
	// ft_printf("rev: %d\n", rev);
	// rev = ft_printf("abc% +ddef\n", 10);
	// ft_printf("rev: %d\n", rev);
	// ft_printf("%.d\n", 5);
	// printf("%.d\n", 5);
	// ft_printf("%.d\n", 0);
	// printf("%.d\n", 0);
	// rev = ft_printf("abc%010ddef\n", -10);
	// printf("rev: %d\n", rev);
	// rev = printf("abc%010ddef\n", -10);
	// printf("rev: %d\n", rev);
	// rev = ft_printf("abc%0-10ddef\n", -10);
	// printf("rev: %d\n", rev);
	// rev = printf("abc%0-10ddef\n", -10);
	// printf("rev: %d\n", rev);

	// // percent test
	// ft_printf("abc%%def\n");
	// ft_printf("abc%5%def\n");
	// ft_printf("abc%05%def\n");
	// ft_printf("abc%-05%def\n");

	// // unsigned int test
	// rev = ft_printf("abc%udef\n", 10);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%4ddef\n", 12);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%-4ddef\n", 12);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%04ddef\n", 12);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%10.5ddef\n", 12);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%0-10.5udef\n", 12);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%0-+10.5udef\n", 12);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%.0udef\n", 12);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%.0udef\n", 0);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%+15.5udef\n", (size_t)1 << 31);
	// ft_printf("rev: %u\n", rev);
	// rev = ft_printf("abc%+15.5udef\n", ((size_t)1 << 32) - 1);
	// ft_printf("rev: %u\n", rev);

	// // hex test
	// rev = ft_printf("%#x\n", 200);
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf("%#X\n", 200);
	// ft_printf("return value: %d\n", rev);
	// printf("return value: %d\n", rev);
	// printf("return value: %d\n", rev);
	// printf("return value: %d\n", rev);
	// printf("return value: %d\n", rev);
	// rev = printf("+%5x+\n", 200);
	// rev = ft_printf("+%5x+\n", 200);
	// rev = printf("+%-5x+\n", 200);
	// rev = ft_printf("+%-5x+\n", 200);
	// rev = printf("+%#5x+\n", 200);
	// rev = ft_printf("+%#5x+\n", 200);
	// rev = printf("+%#-5x+\n", 200);
	// rev = ft_printf("+%#-5x+\n", 200);
	// rev = printf("+%#06x+\n", 200);
	// rev = ft_printf("+%#06x+\n", 200);
	// rev = printf("+%k+\n", 10);
	// rev = ft_printf("+%k+\n", 10);
	// rev = printf("|%5.d|\n", 0);
	// rev = ft_printf("|%5.d|\n", 0);

	// // str test
	// rev = ft_printf("abc+%s+def\n", "hello, world!");
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf("%sdef\n", NULL);
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf("abc%5sdef\n", "XXX");
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf("abc%-5sdef\n", "XXX");
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf("abc%-.3sdef\n", "XXXXXX");
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf("abc%-5.3sdef\n", "XXXXXX");
	// ft_printf("return value: %d\n", rev);
	// ft_printf("%s\n", NULL);
	// printf("%s\n", NULL);
	// ft_printf("%10s\n", NULL);
	// printf("%10s\n", NULL);
	// ft_printf("%.10s\n", NULL);
	// printf("%.10s\n", NULL);
	// ft_printf("%.5s\n", NULL);
	// printf("%.5s\n", NULL);
	// ft_printf("%.05s\n", NULL);
	// printf("%.05s\n", NULL);

	// ptr test
	// rev = printf("ptr: |% p\n", "a");
	// printf("return value: %d\n", rev);
	// rev = ft_printf("ptr: |% p\n", "a");
	// printf("return value: %d\n", rev);
	// rev = printf("ptr: |% +p\n", "a");
	// printf("return value: %d\n", rev);
	// rev = ft_printf("ptr: |% +p\n", "a");
	// printf("return value: %d\n", rev);
	// rev = ft_printf("ptr: %p\n", NULL);
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf("ptr: %10p\n", "a");
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf("ptr: %-10p\n", "a");
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf(" %p %p \n", (void *)LONG_MIN, (void *)LONG_MAX);
	// ft_printf("return value: %d\n", rev);
	// rev = ft_printf(" %p %p \n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	// ft_printf("return value: %d\n", rev);
	// ft_printf("[%020p]\n", "a");
	// printf("[%020p]\n", "a");
	// ft_printf("%p\n", NULL);
	// printf("%p\n", NULL);
	// ft_printf("%10p\n", NULL);
	// printf("%10p\n", NULL);
	// ft_printf("%.5p\n", NULL);
	// printf("%.5p\n", NULL);
	// ft_printf("%.2p\n", NULL);
	// printf("%.2p\n", NULL);
	// ft_printf("%.2p\n", NULL);
	// printf("%.2p\n", NULL);
// }


// #include <stdio.h>
// #include <fcntl.h>

// int main(void)
// {
// 	int res;
// 	// char *str = NULL;

// 	close(1);
// 	res = 0;
// 	res = printf("%c", 0);
// 	dprintf(2, "origin:%d\n", res);
// 	res = ft_printf("%c", 0);
// 	dprintf(2, "ft_printf:%d\n", res);
// 	// FILE *fp = freopen("/dev/stdout", "w", stdout);
// 	// fflush(stdout);
// 	return (0);
// }
