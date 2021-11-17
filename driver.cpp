//
//  driver.cpp
//  Lab 2
//
//  Created by Nils Streedain on 10/4/21.
//

#include <iostream>
#include "pokedex.hpp"
#include "pokemon.hpp"

int main(int argc, const char * argv[]) {
	pokedex pokedex;
	pokedex.setTrainerName("Nils");
	
	std::string moves[4] = {"Growl", "Tackle", "Leech Seed", "Vine Whip"};
	pokemon pokemonToAdd(1, "Bulbasaur", moves);
	
	pokedex.addPokemon(pokemonToAdd);
	
	pokedex.print();
	
	return 0;
}
