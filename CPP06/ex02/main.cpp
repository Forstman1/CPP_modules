/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:37:58 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/03 11:07:42 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"


int main()
{
    Base *s = generate();
	identify(s);
    delete s;
    return 0;
}