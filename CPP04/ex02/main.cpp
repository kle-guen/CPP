/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:15:12 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/15 15:36:00 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << std::endl << "/--------ex00 test---------/" << std::endl << std::endl;
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    
    delete j;
    delete i;
    
    const WrongAnimal* k = new WrongCat();
    k->makeSound();
    
    delete k;

    std::cout << std::endl << "/--------ex01 test---------/" << std::endl << std::endl;

    Dog* d = new Dog();
    d->setFirstIdea("I want to eat");
    Dog *d2 = d;
    std::cout << d2->getFirstIdea() << std::endl;
    std::cout << d->getFirstIdea() << std::endl;

    d2->setFirstIdea("I want to drink");

    std::cout << d2->getFirstIdea() << std::endl;
    std::cout << d->getFirstIdea() << std::endl;

    //std::cout << std::endl << "/--------ex02 test---------/" << std::endl << std::endl;
    //const AAnimal* meta = new AAnimal();

    return 0;
}