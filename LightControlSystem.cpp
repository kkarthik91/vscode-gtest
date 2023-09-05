
using namespace std;

class H3OHardware{};

class RTOS{};
class TimerService{
private:
    RTOS rtosObj;
public:
  string getTime() {return "";};
};
class LightController{
private:
    H3OHardware hardwareObj;
public:
  void On(){}
  void Off(){}
};
class LightSchedular{
private:
    TimerService _timerObj;
    LightScheduler _lightSchedObj;
public:
  void remoteSchedule(){}
  void wakeup(){}
void tunerSchedularOn() {}
};
