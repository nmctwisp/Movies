#include <iostream>
#include "Movies.h"

using namespace std;

int main() {
	Movies movies;
	movies.add_movie("Toy Story", "PG");
	movies.add_movie("Toy Story");
	movies.watch("Toy Story");
	movies.watch("Harry Potter");
	
	return 0;
}
