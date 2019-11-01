#include "Movie.h"

Movie::Movie(string name_val, string rating_val, string watched_val) 
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

string Movie::get_times_watched() {
	return this -> watched; 
}
