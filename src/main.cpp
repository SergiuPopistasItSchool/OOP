#include <iostream>
#include "ContBancar.h"
#include "Car.h"

void print()
{
    std::cout << "Hello from a function\n";
}

class myClass
{
    public:
void printHello()
{
    std::cout << "Hello from my Class!!\n";
}

};


struct test
{
    test()
    {
        std::cout << "Un test a fost nascut\n";
    }
    ~test()
    {
        std::cout << "Un test a fost distrus\n";
    }
    void printTest()
    {
        std::cout << "Hello\n";
    }

};

enum Zile
{
    Luni,
    Marti,
    Miercuri,
    Joi,
    Vineri=25,
    Sambata,
    Duminica
};

ContBancar* CreateAccounts()
{
    std::cout << "Introduceti numele utilizatorului de cont\n";
    std::string nume;
    std::cin >> nume;
    std::cout << "Introduceti valoarea soldului initial\n";
    int sold;
    std::cin >> sold;

    //operatorul new este folosit pentru a instanta pe heap
    ContBancar* cont = new ContBancar(nume,sold,10);
    //tip pointer numeObeict = new Obiect

    return cont;
}


int main(int argc, char const *argv[])
{
   ContBancar* c1 =  CreateAccounts();
   std::cout << c1->getNume() << std::endl; //folosim opertorul sageata cand avem nevoie de acces la metode ptrint-run pointer

    delete c1; //operatorul delete va chhema destructorul obiectului si va sterge obiecutl de pe heap

     //n  std::cout << c1->getNume() << std::endl; // dangeling pointers

    Zile azi;
    Zile maine;

    azi = Luni;
//heap
    maine = Duminica;

    bool sameDay = azi == maine;
    std::cout << "Is the same day? " << sameDay << std::endl;

    test t;
    t.printTest();
    

    std::cout<< "Hello World!" << std::endl;
    myClass obiect; // instatiem un obiect de tip myClass
    print();
    obiect.printHello();//invocam metoda printHello
    
    myClass obj2;
    obj2.printHello();


    Car Jannet(100,"Gri",2015,5);
    Jannet.printCarInfo();
    Jannet.Drive(100);
    Jannet.printCarInfo();
   

    return 0;
}
