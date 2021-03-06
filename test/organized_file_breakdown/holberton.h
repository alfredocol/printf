#ifndef	test
#define	test
#include <stdio.h>
/* variadic functions */
#include <stdarg.h>
/* memset */
#include <string.h>
/* constants */
#include <unistd.h>

#define BUFF_SIZE 1024

typedef	struct mods
{
	char	*spec;
	int	(*f)(void *, char buff[BUFF_SIZE]);
}	t_array;

int	_printf(const char *format, ...);
int	print(char *format, va_list list, char buff[BUFF_SIZE]);
int	(*mod(char cspec))(void *arg, char buff[BUFF_SIZE]);
/* helper mod functions */
int	cspec_b(void *arg, char buff[BUFF_SIZE]);
int	cspec_d_i(void *arg, char buff[BUFF_SIZE]);
int	cspec_s(void *arg, char buff[BUFF_SIZE]);
int	cspec_r(void *arg, char buff[BUFF_SIZE]);
int	cspec_R(void *arg, char buff[BUFF_SIZE]);
/* general helper functions */
char	*rot13(char *s);
char	*rev_string(char *s);
int	valid_cspec(char c);
int	_strlen(char *s);
void	update_buff(char *arg, char buff[BUFF_SIZE], int len);
int	error(char *format, va_list copy);
#endif
