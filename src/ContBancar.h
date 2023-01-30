#ifndef CONTBANCAR_H
#define CONTBANCAR_H

#pragma once
#include<iostream>
#include<string>

class ContBancar
{
public:
    ContBancar(std::string nume, int sold,int val_const); //constructor

    ContBancar();//constructor

    ~ContBancar();//destructor


    void setNume(std::string nume);

    std::string getNume()
    {
        return m_nume;
    }
    void set_sold(int sold);

    int getSold()
    {
        return m_sold;
    }
   void print_details();
    //Tema: O metoda publica prin care puteti sa printati detaliile contului
    // Extidenti cu un setter si getter pt m_iban
    
    //Tema creati o clasa cu nume Bicileta ce sa aibe atributele tip_cadru, dimensiune_roti, numar de viteze
    // si metodele de accelerare si franare

    //Tema: O metoda de generat ibanul: 
    // Reguli ROITSCHOOL dupa care 15 numere random

private:
    std::string m_nume;
    int m_sold;
    std::string m_iban;
    const int constVar;

    bool isAvalible;
 
};

#endif