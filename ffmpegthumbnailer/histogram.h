//    Copyright (C) 2010 Dirk Vanden Boer <dirk.vdb@gmail.com>
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string.h>

namespace ffmpegthumbnailer
{

template <typename T>
struct Histogram {
    T r[256];
    T g[256];
    T b[256];

    Histogram() {
        memset(r, 0, 255 * sizeof(T));
        memset(g, 0, 255 * sizeof(T));
        memset(b, 0, 255 * sizeof(T));
    }
};

}

#endif
