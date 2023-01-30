#include "ContBancar.h"

ContBancar::ContBancar(std::string nume, int sold, int const_var):
m_nume(nume),
m_sold(sold),
constVar(const_var),
isAvalible(false)
{
    //invocati met genInban
    std::cout << "Un cont a fost creat\n" << std::endl;
}

ContBancar::ContBancar()
:m_nume("Necunoscut"),
m_sold(0),
constVar(5)
{
    std::cout << "Un cont a fost creat\n" << std::endl;
}

ContBancar::~ContBancar()
{
    std::cout << "Un cont a fost sters\n" << std::endl;
}

void ContBancar::setNume(std::string nume)
{
    //Tema: implementati un check in care nume sa fie doar carctere latine
    m_nume = nume;
}

void ContBancar::set_sold(int sold)
{
    if(sold < 0)
    {
        std::cout << "ERROR soldul initial trebuie sa fie mai mare de 0\n";

    }
    else
    {
        m_sold = sold;
        isAvalible = true;
    }
}

void ContBancar::print_details()
{
    std::cout << "Numele contului este: " << m_nume << std::endl;
    std::cout << "Soldul contului este: " << m_sold << std::endl;
    std::cout << "Ibanul contului este: " << m_iban << std::endl;
}