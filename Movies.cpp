#include "Movie.h"
#include "Movies.h"
#include <iostream>

using std::cout;
using std::endl;
Movies::Movies() {
}

Movies::~Movies() {
}

void Movies::add_movie(string name, string rating, int watched){
	if (!this->in_collection(name))
		this->collection.push_back(Movie(name, rating, watched));
	else
		cout << "Error: " << name << " " << this->err.at(1) << endl;
}

bool Movies::in_collection(string name){
	for (Movie &movie: this->collection)
		if (movie.get_name() == name)
			return true;
	return false;
}

signed int Movies::get_movie_loc(string name){
	signed int index = 0;	
	for (Movie &movie: this->collection){
		if (movie.get_name() == name){
			return index;
		}
		else
			++index;
	}
	return -1;
}

void Movies::watch(string name, string rating){
	signed int loc = this->get_movie_loc(name);
	if (loc == -1)
		cout << "Error: " << name << " " <<this->err.at(0) << endl;
	else
		collection.at(loc).watch();
}
void Movies::display_movies(){
	for (Movie &movie: collection){
		cout << "Movie: " << movie.get_name();
		cout << " Rating: " << movie.get_rating();
		cout << " Watched: " << movie.get_times_watched();
		cout << endl;
	}
}