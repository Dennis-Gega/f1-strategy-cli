#include "Tire.h"

Tire::Tire(Compound c) {
  compound = c;
  age = 0;
  integrity = 100.0; switch (c) {
    case Compound::Soft:
      wearRate = 5.0;
      break;
    case Compound::Medium:
      wearRate = 3.5;
      break;
    case Compound::Hard:
      wearRate = 2.5;
      break;
  }
}

int Tire::getAge() { return age; }
double Tire::getIntegrity() { return integrity; }
double Tire::getWearRate() { return wearRate; }
void Tire::degrade(double degMultiplier) {
  integrity -= wearRate * degMultiplier;
  if (integrity < 0) integrity = 0;
  age++;
};
