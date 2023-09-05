using namespace std:

class Vehicle {
public:
  string color;
  string model;
  string name;
  string regno;
};

class StartupMotor{};
class FluePump {};
class Engine{
private:
    FuelPump fuelPump;
    StartupMotor motorObj;
public:
    void crankEngine(){}
    
};

class Car : public Vehicle {
    Engine engObj;
public:
    void start(){
      engObj.crankEngine();
    }
};



