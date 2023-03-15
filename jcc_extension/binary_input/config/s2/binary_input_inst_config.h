#ifndef BINARY_INPUT_INSTANCE_CONFIG_H
#define BINARY_INPUT_INSTANCE_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// <o BINARY_INPUT_INSTANCE_MODE> Set input type
// <gpioModeInput=> regular input
// <gpioModeInputPull=> input with pull up/down
// <gpioModeInputPullFilter=> input with pull up/down and filter
// <i> Default: gpioModeInput
#define BINARY_INPUT_INSTANCE_MODE       gpioModeInput

// <o BINARY_INPUT_INSTANCE_MODE_PULL> Set input pull (or configure filter)
// <0=> Pull Down (or disable filter if no Pull)
// <1=> Pull Up (or enable filter if no Pull)
// <i> Default: 1
#define BINARY_INPUT_INSTANCE_MODE_PULL       1
// <<< end of configuration section >>>

// <<< sl:start pin_tool >>>

// <gpio label="GPIO Pin"> BINARY_INPUT_INSTANCE
// $[GPIO_BINARY_INPUT_INSTANCE]
#define BINARY_INPUT_INSTANCE_PORT       gpioPortA
#define BINARY_INPUT_INSTANCE_PIN        1
// [GPIO_BINARY_INPUT_INSTANCE]$

// <<< sl:end pin_tool >>>
# endif  // BINARY_INPUT_INSTANCE_CONFIG_H
