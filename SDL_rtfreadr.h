/*
    SDL_rtf:  A companion library to SDL for displaying RTF format text
    Copyright (C) 2003  Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public
    License along with this library; if not, write to the Free
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Sam Lantinga
    slouken@libsdl.org
*/

/* $Id$ */

#ifndef _SDL_RTFREADR_H
#define _SDL_RTFREADR_H

#include "rtftype.h"
#include "SDL.h"

int ecReflowText(RTF_Context *ctx, int width);
int ecRenderText(RTF_Context *ctx, SDL_Surface *target,
        const SDL_Rect *rect, int yOffset);

#endif /* _SDL_RTFREADR_H */
