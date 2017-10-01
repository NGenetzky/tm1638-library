/* tm1638-library library by rjbatista
 */

#include "tm1638-library.h"

/**
 * Constructor.
 */
Tm1638library::Tm1638library()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void Tm1638library::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void Tm1638library::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void Tm1638library::doit()
{
    Serial.println("called doit");
}
