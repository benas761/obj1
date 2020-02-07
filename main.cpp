#include <iostream>

int main()
{
    std::string name;
    std::cout << "Iveskite varda" << std::endl;
    std::cin >> name;
    std::string Edges[5];
    int n = 14 + name.length();
    for(int i=0; i<n; i++) Edges[0]+='*';
    Edges[1]='*';
    for(int i=0; i<n-2; i++)Edges[1]+=' ';
    Edges[1]+='*';
    Edges[4]=Edges[0];
    Edges[3]=Edges[1];
    Edges[2] = "* Sveikas, " + name + "! *";
    for(int i=0;i<5;i++) std::cout << Edges[i] << std::endl;
    return 0;
}
