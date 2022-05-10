#include <iostream>
#include <map>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("song.txt");
	string s;
	map<string, int> map;


	while (ifs >> s)
		++map[s];

	typedef::map<string, int>::const_iterator iter;
	for (iter it = map.begin(); it != map.end(); ++it)
		cout << "Il y a  " << it->second << " Occurence du mot " << it->first << endl;
	return 0;
}