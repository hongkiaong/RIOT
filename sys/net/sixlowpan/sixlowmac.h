/* 6LoWPAN MAC header file */

#ifndef SIXLOWMAC_H
#define SIXLOWMAC_H

#include <stdio.h>
#include <stdint.h>
#include "sixlowip.h"
#include "radio/radio.h"

#define RADIO_STACK_SIZE            2048
#define RADIO_RCV_BUF_SIZE          64
#define RADIO_SND_BUF_SIZE          100
#define RADIO_SENDING_DELAY         1000

uint16_t get_radio_address(ieee_802154_long_t *lla);

void send(void);

#endif /* SIXLOWMAC_H*/
