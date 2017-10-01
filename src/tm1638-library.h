#pragma once

/* tm1638-library library by rjbatista
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class Tm1638library
{
public:
  /**
   * Constructor
   */
  Tm1638library();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
