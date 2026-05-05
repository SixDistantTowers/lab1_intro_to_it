#include <iostream>
#include <string>

struct car
{
    std::string brand;
    int price;
    int year;

    void getinfo()
    {
        std::cout << brand << '\n';
        std::cout << price << '\n';
        std::cout << year << '\n';
    }
};


int main()
{
    const int n{ 5 };
    car cars[n];

    for (int i{ 0 }; i < n; i++)
    {
        std::cout << "brand: ";
        std::cin >> cars[i].brand;

        std::cout << "Price: ";
        std::cin >> cars[i].price;

        std::cout << "Year: ";
        std::cin >> cars[i].year;
        std::cout << '\n';
    }

    std::cout << "Min year: ";
    int myear{};
    std::cin >> myear;


    int minprice{ 9999999 };
    int index{};
    bool startedonce{ false };

    for (int i{ 0 }; i < n; i++)
    {
        if (cars[i].year >= myear)
        {
            startedonce = true;
            if (minprice > cars[i].price)
            {
                minprice = cars[i].price;
                index = i;
            }
        }
    }

    if (startedonce)
    {
        cars[index].getinfo();
    }
    else
    {
        std::cout << "\nNo cars found";
    }
}
