/*
 * Copyright (C) 2017 Freie Universität Berlin
 *               2017 Inria
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    boards_nucleo-l073 Nucleo-L073
 * @ingroup     boards_nucleo
 * @brief       Board specific files for the nucleo-l073 board
 * @{
 *
 * @file
 * @brief       Board specific definitions for the nucleo-l073 board
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 * @author      Alexandre Abadie <alexandre.abadie@inria.fr>
 */

#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>
#include "board_common.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    xtimer configuration
 * @{
 */
#define XTIMER_DEV          TIMER_DEV(0)
#define XTIMER_CHAN         (0)
#define XTIMER_WIDTH        (16)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
