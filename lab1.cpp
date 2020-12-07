#include <iostream>

int gcd (int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    int d = gcd (b % a, a);
    return d;
}

int main()
{
    std::cout << "Rukavitsin D. FITU 090301\n\n";


    long long a, b, c, g;

    std::cout << "a = "; 
    std::cin >> a;
    std::cout << "\nb = ";
    std::cin >> b;
    std::cout << "\nc = ";
    std::cin >> c;
    std:: cout << "\n";
    g = gcd(a, b);
    if (c % g != 0)
    {
        std::cout << "Impossible";
        return 0;
    }
    a /= g;
    b /= g;
    c /= g;
    for (int i = 0 ; ; i++)
    {
        if ((c - i  * a) % b == 0)
        {
            std::cout << i << ' ' << (c - i * a) / b;
            return 0;
        }
    }
}
