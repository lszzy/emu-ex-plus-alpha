/***************************************************************************
 *   Copyright (C) 2008 by Sindre Aamås                                    *
 *   sinamas@users.sourceforge.net                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License version 2 as     *
 *   published by the Free Software Foundation.                            *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License version 2 for more details.                *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   version 2 along with this program; if not, write to the               *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef RSHIFT16_ROUND_H
#define RSHIFT16_ROUND_H

// negative shift is not defined in c++98
#ifdef NO_NEGATIVE_SHIFT
inline long rshift16_round(long const l) {
	return l < 0 ? -((-l + 0x8000) >> 16) : (l + 0x8000) >> 16;
}
#else
inline long rshift16_round(long l) {
	return (l + 0x8000) >> 16;
}
#endif

#endif
