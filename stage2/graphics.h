/* graphics.h - graphics console interface */
/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2002  Free Software Foundation, Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; If not, see <http://www.gnu.org/licenses/>
 */

#ifndef GRAPHICS_H
#define GRAPHICS_H

#ifndef __MINIOS__
/* magic constant */
#define VIDEOMEM 0xA0000
#endif

/* function prototypes */
char *graphics_get_splash(void);

int read_image(char *s);
void graphics_cursor(int set);

/* function prototypes for asm functions */
void * graphics_get_font();
void graphics_set_palette(int idx, int red, int green, int blue);
void set_int1c_handler();
void unset_int1c_handler();

extern short cursorX, cursorY;
extern char cursorBuf[16];
extern int shade;
extern int view_x0, view_y0, view_x1, view_y1;

#endif /* GRAPHICS_H */
