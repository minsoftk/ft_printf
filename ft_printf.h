/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:12:27 by minsungk          #+#    #+#             */
/*   Updated: 2021/03/30 16:27:58 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
# define TYPE "cspdiuxX%"

typedef struct	s_flag
{
	int		minus;
	int		zero;
	int		width;
	int		prec;
	char	type;
}				t_flag;

/*
****************Main***********
*/
int		ft_printf(const char *, ...);
int		check_format(va_list ap, char *str, t_flag *info, int i);
void	check_width_prec(va_list ap, char *str, t_info *info, int i);
int		format_type(va_list ap, t_info* info);

/*
****************Print***********
*/


#endif