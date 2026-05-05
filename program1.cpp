#include <iostream>
#include <string>
#include <sstream>

int curmonth{ 5 };

class film
{
private:
	std::string name;
	std::string sname;
	std::string producer;
	int day;
	int month;
	int year;


public:
	friend void getinfo(film& f, std::string valname);

	film(std::string n, std::string sn, std::string p, int d, int m, int y)
		:name(n), sname(sn), producer(p), day(d), month(m), year(y) {
	};
};

void getinfo(film& f, std::string valname)
{
	if (f.producer == valname and f.month == curmonth)
	{
		std::cout << f.producer << '\n';
		std::cout << f.name << '\n';
		std::cout << f.sname << '\n';
		std::cout << f.day << "." << f.month << "." << f.year << '\n' << '\n';
	}
}

int main()

{

	film f1("The Shawshank Redemption", "Castle Rock Entertainment", "Niki Marvin", 14, 10, 1994);
	film f2("The Godfather", "Paramount Pictures", "Albert S. Ruddy", 24, 5, 1972);
	film f3("The Dark Knight", "Warner Bros. Pictures", "Albert S. Ruddy", 18, 5, 2008);
	film f4("Pulp Fiction", "Miramax Films", "Lawrence Bender", 14, 10, 1994);
	film f5("Inception", "Warner Bros. Pictures", "Emma Thomas", 16, 7, 2010);


	std::string producerName;
	std::cout << "Enter the producer's name: ";
	std::getline(std::cin, producerName);

	getinfo(f1, producerName);
	getinfo(f2, producerName);
	getinfo(f3, producerName);
	getinfo(f4, producerName);
	getinfo(f5, producerName);

