#ifndef RADIOPRS_INSTANCE_CONFIG_H
#define RADIOPRS_INSTANCE_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>
// <h> Radio PRS Configuration

// <o RADIOPRS_INSTANCE_SOURCESEL> Radio PRS signal source
// <PRS_RACL_RX=> RX active
// <PRS_RACL_TX=> TX active
// <PRS_RACL_ACTIVE=> Radio enabled
// <PRS_RACL_LNAEN=> LNA enabled for RX
// <PRS_RACL_PAEN=> PA enabled for TX
// <PRS_MODEML_ANT0=> Antenna 0
// <PRS_MODEML_ANT1=> Antenna 1
// <PRS_MODEML_DCLK=> RX data clock
// <PRS_MODEML_DOUT=> RX data out
// <PRS_MODEML_FRAMEDET=> Sync detected
// <PRS_MODEML_FRAMESENT=> Sync sent
// <PRS_MODEM_PREDET=> Preamble detected
// <PRS_MODEMH_PRESENT=> Preamble sent
// <PRS_MODEMH_RSSIJUMP=> change in RSSI
// <PRS_MODEMH_SYNCSENT=> Sync word sent
// <PRS_MODEMH_EOF=> end of frame
// <PRS_FRC_DCLK=> FRC DCLK
// <PRS_FRC_DOUT=> FRC DOUT
// <i> Default: PRS_MODEML_DOUT
#define RADIOPRS_INSTANCE_SOURCESEL PRS_MODEML_DOUT

// </h>

// <<< end of configuration section >>>

// <<< sl:start pin_tool >>>
// <prs gpio=true > RADIOPRS_INSTANCE
// $[PRS_RADIOPRS_INSTANCE]
#define RADIOPRS_INSTANCE_CHANNEL    0
#define RADIOPRS_INSTANCE_PORT       gpioPortA
#define RADIOPRS_INSTANCE_PIN        1
// [PRS_RADIOPRS_INSTANCE]$
// <<< sl:end pin_tool >>>
# endif  // RADIOPRS_INSTANCE_CONFIG_H
