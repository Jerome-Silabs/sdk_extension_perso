#ifndef RADIOPRS_INSTANCE_CONFIG_H
#define RADIOPRS_INSTANCE_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>
// <h> Radio PRS Configuration

// <o RADIOPRS_INSTANCE_SOURCESEL> Radio PRS signal source
// <0x5100=> Radio enabled
// <0x5101=> Transmit mode enabled
// <0x5102=> Receive mode enabled
// <0x5103=> LNA enabled for RX
// <0x5104=> PA enabled for TX
// <0x5600=> Frame detected
// <0x5601=> Preamble detected
// <0x5602=> Timing detected
// <0x5603=> Frame sent
// <0x5604=> Sync word sent
// <0x5605=> Preamble sent
// <0x5606=> Modem clock out
// <0x5607=> Modem data out
// <0x5705=> Antenna 0
// <0x5706=> Antenna 1
// <i> Default: 0x5607
#define RADIOPRS_INSTANCE_SOURCESEL 0x5607

// </h>

// <<< end of configuration section >>>

// <<< sl:start pin_tool >>>
// <prs gpio=true > RADIOPRS_INSTANCE
// $[PRS_RADIOPRS_INSTANCE]
#define RADIOPRS_INSTANCE_CHANNEL    0
#define RADIOPRS_INSTANCE_PORT       gpioPortA
#define RADIOPRS_INSTANCE_PIN        1
#define RADIOPRS_INSTANCE_LOC        0
// [PRS_RADIOPRS_INSTANCE]$
// <<< sl:end pin_tool >>>
# endif  // RADIOPRS_INSTANCE_CONFIG_H
