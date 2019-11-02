#include <iostream>
#include "Movies.h"

using namespace std;

int main() {
	Movies movies;
	movies.add_movie("Toy Story", "G");
	movies.add_movie("Shawshank Redemption", "R");
	movies.add_movie("American History X", "R");
	movies.add_movie("Joker", "R");
	movies.add_movie("Harry Potter and the Sourcer's Stone", "G");
	movies.add_movie("Terminator: Dark Fate");
	movies.watch("Toy Story");
	movies.watch("Harry Potter and the Sourcer's Stone");
	movies.display_movies();
	
	return 0;
}
