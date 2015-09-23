#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include "CarPart.hpp"

class Engine : CarPart{
  public:
    void getRPM();
    virtual void PartChanged();
    
  protected:
    
  private:
    int RPM;

#endif
