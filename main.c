/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:23:16 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/17 17:11:32 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
    //% Check
    printf("Test 1\t\t: Mod Check\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: %%\n");
    printf("Output\t\t: ");
    printf("%%\n\n");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: %%\n");
    ft_printf("Output\t\t: ");
    ft_printf("%%\n\n");

    //str Check
    printf("Test 2\t\t: String Format Check\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: This is a test string.\n");
    printf("Output\t\t: ");
    printf("This is a test string.\n\n");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: This is a test string.\n");
    ft_printf("Output\t\t: ");
    ft_printf("This is a test string.\n\n");

    //d check
    printf("Test 3\t\t: d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%d\n\n", 650);

    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%d\n\n", -650);

    //u check
    printf("Test 17\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%u\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", 650);

    printf("Test 18\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 4000000000\n");
    printf("Output\t\t: ");
    printf("%u\n\n", 4000000000);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 4000000000\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", 4000000000);

    printf("Test 18\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%u\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", -650);

    //s check
    printf("Test 21\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: N/A\n");
    printf("Output\t\t: ");
    printf("%s\n\n", "");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: N/A\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", "");

    printf("Test 22\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: NULL\n");
    printf("Output\t\t: ");
    printf("%s\n\n", NULL);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: NULL\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", NULL);

    printf("Test 24\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: Coconut\n");
    printf("Output\t\t: ");
    printf("%s\n\n", "Coconut");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: Coconut\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", "Coconut");

    //c check
    printf("Test 30\t\t: c\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: a\n");
    printf("Output\t\t: ");
    printf("%c\n\n", 'a');

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: a\n");
    ft_printf("Output\t\t: ");
    ft_printf("%c\n\n", 'a');

    //x check
    printf("Test 50\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 16\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 16);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 16\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 16);

    printf("Test 51\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 2048);

    printf("Test 52\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 16777215\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 16777215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 16777215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 16777215);

    //X check
    printf("Test 53\t\t: X\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 6777215\n");
    printf("Output\t\t: ");
    printf("%X\n\n", 6777215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 6777215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%X\n\n", 6777215);

    //p check
    int     tmpInt;

    tmpInt = 25;
    printf("Test 58\t\t: p\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: &tmpInt\n");
    printf("Output\t\t: ");
    printf("%p\n\n", &tmpInt);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: &tmpInt\n");
    ft_printf("Output\t\t: ");
    ft_printf("%p\n\n", &tmpInt);

	//%v check
    /* printf("Test 59\t\t: v\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: v\n");
    printf("Output\t\t: ");
    printf("%vk\n\n");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: v\n");
    ft_printf("Output\t\t: ");
    ft_printf("%vk\n\n"); */
    return (0);
}
