#include <iostream>

int main()
{
    std::string name;
    std::cout << "Iveskite varda:" << std::endl;
    std::cin >> name;
    int n = 14 + name.length();
    bool isFemale = (name[n-15]== 'e' || name[n-15] == 'a');
    if(isFemale) n--;

    std::cout << "Koks norimas plotis? (turi buti nelyginis ir daugiau uz 2)" << std::endl;
    int temp;   std::cin >> temp;   const int len = temp;
    std::string Edges[len];

    if(len % 2 == 0 || len<3) std::cout << "Netinkamas plotis!\n";
    else {
        for(int j=0; j<n; j++) Edges[0]+='*';
        Edges[len-1] = Edges[0];

        for(int i=1; i<len-1; i++) {
            Edges[i]='*';
            for(int j=0; j<n-2; j++)Edges[i]+=' ';
            Edges[i]+='*';
        } // Viskas toliau uzpildoma tarpais
        if(isFemale) { Edges[len/2] = "* Sveika, " + name + "! *"; n--; }
        else Edges[len/2] = "* Sveikas, " + name + "! *";
        for(int i=0;i<len;i++) std::cout << Edges[i] << std::endl;
    }
    return 0;
}
