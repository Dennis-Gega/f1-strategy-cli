#pragma once

enum class Compound {
  Soft,
  Medium,
  Hard
};

class Tire {
  Compound compound;
  int age;
  double integrity;
  double wearRate;

public:
  Tire(Compound c);

  int getAge();
  double getIntegrity();
  double getWearRate();

  void degrade(double degMultiplier);
};
