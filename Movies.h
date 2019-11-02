#ifndef MOVIES_H
#define MOVIES_H
#include <vector>
#include "Movie.h"

using std::vector;

class Movies {
	vector<Movie> collection;
	const vector<string> err {"Not Found", "Already Exists"};
public:
	signed int get_movie_loc(string name);
	bool in_collection(string name);
	void add_movie(string name, string rating="N/A", int watched=0);
	void add_watched_count(string name);
	void watch(string name, string rating="N/A");
	void display_movies();
	Movies();
	~Movies();

};

#endif // MOVIES_H
