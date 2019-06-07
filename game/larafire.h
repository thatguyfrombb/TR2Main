/*
 * Copyright (c) 2017-2019 Michael Chaban. All rights reserved.
 * Original game is written by Core Design Ltd. in 1997.
 * Lara Croft and Tomb Raider are trademarks of Square Enix Ltd.
 *
 * This file is part of TR2Main.
 *
 * TR2Main is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TR2Main is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TR2Main.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LARA_FIRE_H_INCLUDED
#define LARA_FIRE_H_INCLUDED

#include "global/types.h"

/*
 * Function list
 */
//	0x0042E740:		LaraGun
//	0x0042ECB0:		CheckForHoldingState

#define InitialiseNewWeapon ((void(__cdecl*)(void)) 0x0042ECF0)

//	0x0042EE30:		LaraTargetInfo
//	0x0042EFD0:		LaraGetNewTarget
//	0x0042F1F0:		find_target_point
//	0x0042F2A0:		AimWeapon
//	0x0042F370:		FireWeapon
//	0x0042F6E0:		HitTarget
//	0x0042F780:		SmashItem
//	0x0042F7E0:		WeaponObject

#endif // LARA_FIRE_H_INCLUDED
