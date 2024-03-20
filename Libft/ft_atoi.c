/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:43:18 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 22:00:17 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const   char *str)
{
    int i;/*index of first digit*/
    int sign;/*indicates the sign of the digit, either positive or negative*/
    int result;/*indicates the result*/

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))/*ignores spaces, tabs, back, next and new line*/
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;      
    }
    while (str[i] >= '0' && <= '9')
    {
        result *= 10;/*multiplies x10*/
        result *= str[i] - '0';/*adds found result to the total taking the value of str[i] and taking out the '0', so we can get the real number*/
        i++;
    }
    return (sign * result); /*it gives you the final number with it sign, positive or negative*/
}
/*
int main ()
{
    int i;
    char str[12];

    ft_strcpy(str, "0987654321");
    result = ft_atoi(str);
    printf("str value = %s, int result = %d\n", str, result);

    ft_strcpy(str, "thisisatrial");
    result = ft_atoi(str);
    printf("str value = %s, int result = %d\n", str, result);

    return(0);
}
*/