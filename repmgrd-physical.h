/*
 * repmgrd-physical.h
 * Copyright (c) 2ndQuadrant, 2010-2017
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _REPMGRD_PHYSICAL_H_
#define _REPMGRD_PHYSICAL_H_

void		do_physical_node_check(void);

void		monitor_streaming_primary(void);
void		monitor_streaming_standby(void);
void		close_connections_physical(void);

#endif							/* _REPMGRD_PHYSICAL_H_ */
