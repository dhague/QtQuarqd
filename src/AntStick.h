/*
 * AntStick.h
 *
 *  Created on: 15 Feb 2011
 *      Author: dhague
 *
 *  Class for communicating with Garmin/SiLabs UsbXpress ANT+ stick drivers
 */

#ifndef ANTSTICK_H_
#define ANTSTICK_H_

class AntStick {
public:
    AntStick();
    void setBaudRate(int speed);
};

#endif /* ANTSTICK_H_ */
