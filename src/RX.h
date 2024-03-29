/* Copyright (C) 2015 Kristian Sloth Lauszus. All rights reserved.

 This software may be distributed and modified under the terms of the GNU
 General Public License version 2 (GPL2) as published by the Free Software
 Foundation and appearing in the file GPL2.TXT included in the packaging of
 this file. Please note that GPL2 Section 2[b] requires that all works based
 on this software must also be made publicly available under the terms of
 the GPL2 ("Copyleft").

 Contact information
 -------------------

 Kristian Sloth Lauszus
 Web      :  http://www.lauszus.com
 e-mail   :  lauszus@gmail.com
*/

#ifndef __rx_h__
#define __rx_h__

#ifdef __cplusplus
extern "C" {
#endif

// Used to check for min and max value of a specific channel
#define CHANNEL_MIN_CHECK (-93.0f)
#define CHANNEL_MAX_CHECK (95.0f)

typedef enum {
    RX_AILERON_CHAN = 0,
    RX_ELEVATOR_CHAN,
    RX_THROTTLE_CHAN,
    RX_RUDDER_CHAN,
    RX_AUX1_CHAN,
    RX_AUX2_CHAN,
    RX_NUM_CHANNELS,
} rxChannel_e;

void initRX(void);
float getRXChannel(rxChannel_e channel);

extern volatile bool validRXData;

#ifdef __cplusplus
}
#endif

#endif
