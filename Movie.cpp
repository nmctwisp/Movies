#include "Movie.h"

Movie::Movie(string name_val, string rating_val, int watched_val) 
	:	name{name_val},
		rating{rating_val},
		watched{watched_val} {
}

Movie::~Movie() {
}

string Movie::get_name() {
	return this -> name;
}

string Movie::get_rating() {
	return this -> rating;
}

int Movie::get_times_watched() {
	return this -> watched; 
}

void Movie::watch() {
	++this->watched;
} 