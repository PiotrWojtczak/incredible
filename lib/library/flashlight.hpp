#ifndef FLASHLIGHT_H
#define FLASHLIGHT_H
#include<iostream>
#include<string>

class Flashlight {
public:
  Flashlight();
  ~Flashlight();
public:
  void transmit(std::string code);
};
#endif

