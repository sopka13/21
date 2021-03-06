/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <sopka13@mail.ru>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:59:17 by eyohn             #+#    #+#             */
/*   Updated: 2021/07/01 16:17:03 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie a("Mandy");
	Zombie *b = newZombie("Bob");

	a.anounce();
	b->anounce();

	delete b;

	Zombie *horde = zombieHorde(10, "Sanchez");

	delete[] horde;

	return (0);
}