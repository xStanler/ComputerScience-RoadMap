#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<char, int> mapa;

	mapa['A'] = 6;
	mapa['B'] = 47;
	mapa['C'] = 23;
	
	map<char, int> mapa2 (mapa.begin(), mapa.end());
	map<char, int> mapa3 (mapa);

	for(auto& i : mapa)
	{
		cout<<i.first<<" -> "<<i.second<<"\n";
	}

	cout<<endl;

	map<char, int>::iterator it;
	for(it = mapa.begin(); it != mapa.end(); ++it)
	{
		cout<<it->first<<" -> "<<it->second<<"\n";
	}
}
