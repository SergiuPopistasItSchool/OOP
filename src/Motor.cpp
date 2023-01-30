#include "Motor.h"

Motor::Motor(int caiPutere)
{
    this->caiPutere = caiPutere; // this -> pointer catre Motor
}

Motor::~Motor()
{

}

void Motor::Start()
{
    std::cout << "Car has started\n";
}