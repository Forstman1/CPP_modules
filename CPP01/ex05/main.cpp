/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:06:37 by sahafid           #+#    #+#             */
/*   Updated: 2022/09/16 15:10:19 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char *argv[])
{
    harl Harl;

    if (argc == 2)
        Harl.complain(argv[1]);
    return (0);
}