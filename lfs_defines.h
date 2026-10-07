/**
 * @file        lfs_defines.h
 * @brief       Build time settings for littlefs, read through LFS_DEFINES.
 *
 * @author      Nima Askari (NimaLTD)
 * @email       nima.askari@gmail.com
 * @github      https://www.github.com/nimaltd
 * @linkedin    https://www.linkedin.com/in/nimaltd
 * @youtube     https://www.youtube.com/@nimaltd
 * @instagram   https://instagram.com/github.nimaltd
 *
 * @copyright   (c) 2026 Nima Askari (NimaLTD)
 *              SPDX-License-Identifier: BSD-3-Clause
 *              See LICENSE.md in the project root for the full license text.
 *
 * @note        Your settings go between the USER CODE markers. The installer
 *              replaces the rest of this file on every update and keeps what
 *              is between them, so a setting you changed is never lost.
 */

#ifndef LFS_DEFINES_H
#define LFS_DEFINES_H

/*
 * ****************************************************************************************************
 * Configuration
 * ****************************************************************************************************
*/

/* USER CODE BEGIN LITTLEFS_CONFIGURATION */

/* littlefs prints a line through printf for each debug event, warning and
   error, and checks itself with assert(). All four together cost about 9 KB
   of flash on a Cortex-M4 at -Os: littlefs is 23.1 KB with them and 13.8 KB
   without. Delete a line to have it back while developing. The errors alone
   cost about 4 KB, and assert() alone about 7 KB, since it prints too. */
#define LFS_NO_DEBUG
#define LFS_NO_WARN
#define LFS_NO_ERROR
#define LFS_NO_ASSERT

/* USER CODE END LITTLEFS_CONFIGURATION */

#endif /* LFS_DEFINES_H */
