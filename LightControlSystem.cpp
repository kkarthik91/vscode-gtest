#include <string>
using namespace std;

//interface for Timer Service
clas ITimerService{
public:
    virtual string getTimer() = 0;
};

//interface for Light controller
class ILightController{
public:
    //Expectation
    virtual void On() = 0;
    virtual void Off() = 0;
};

//interface for RTOS
class IOperatingSysteService{
public:
    virtual void updateTime() = 0;
};

//interface for hardware
class ILightHardwareSupport{
public:
    virtual void open() = 0;
    virtual void close() = 0;
};

//Hardware implements hardware support
class H3OHardware: public ILightHardwareSupport{
public:
    void open();
    void close();
};

//RTOS implements interface
class RTOS:public IOperatingSysteService{
public:
    void updateTime() {
        
    }
};

//TimerService implements interface
class TimerService:public ITimerService{
private:
    IOperatingSysteService* rtosObj;
public:
  string getTime() {return "";};
};

class LightController:public ILightController{
private:
    H3OHardware hardwareObj;
public:
  void On(){}
  void Off(){}
};

class LightSchedular{
private:
    ITimerService* _timerObj;
    ILightController* _lightControlrObj;
public:
  void remoteSchedule(){}
  void wakeup(){}
void tunerSchedularOn() {}
};


clase Engine{};
class Car {
    Engine* engine Ptr;
public:
    //Constructor Engine
    Car(Eangine* engineArg): enginePtr(engineArg)){
        
    }
    void drive(){
        
    }
};
    

class Person{
public:
    //Dependency Incjection
    void commute(Car* vehiclePtr){
        //star using car
    }
};
