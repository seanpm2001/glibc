/* Copyright (C) 1991-2023 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <libioP.h>
#include <stdio.h>

/* Read formatted input from STREAM according to the format string FORMAT.  */
int
__isoc23_vfscanf (FILE *stream, const char *format, va_list args)
{
  return __vfscanf_internal (stream, format, args,
			     SCANF_ISOC99_A | SCANF_ISOC23_BIN_CST);
}
libc_hidden_def (__isoc23_vfscanf)