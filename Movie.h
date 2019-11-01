#ifndef MOVIE_H
#define MOVIE_H
#include <string>

using std::string;

class Movie {
	int watched;
	string name;
	string rating;
public:
	string get_name();
	string get_rating();
	int get_times_watched();
	// Constructor
	Movie(string name_val="None", string rating_val="None", int watched_val=0);
	// Destructor
	~Movie();

};

#endif // MOVIE_H
