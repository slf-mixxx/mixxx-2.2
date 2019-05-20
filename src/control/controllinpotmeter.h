#ifndef CONTROLLINPOTMETER_H
#define CONTROLLINPOTMETER_H

#include "control/controlpotmeter.h"

class ControlLinPotmeter : public ControlPotmeter {
    Q_OBJECT
  public:
    // dStep = 0 and dSmallStep = 0 defaults to 10 and 100 steps
    ControlLinPotmeter(ConfigKey key,
            double dMinValue = 0.0, double dMaxValue = 1.0,
            double dStep = 0, double dSmallStep = 0,
            bool allowOutOfBounds = false);
};

#endif // CONTROLLINPOTMETER_H
