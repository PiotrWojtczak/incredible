#include<iostream>
#include<string>
#include<flashlight.hpp>

int main(){
  Flashlight* f = new Flashlight();
  f->transmit("abrakadabra github");
  delete f;
}
