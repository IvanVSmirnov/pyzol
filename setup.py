#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#   Copyright (C) 2020  Ivan Smirnov <ivsmir@gmail.com>
#
#   This program is free software; you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation; either version 3 of the License, or
#   (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program; if not see see <http://www.gnu.org/licenses/>


from distutils.core import setup, Extension
import pybind11
from doc.source.conf import project, release

pyzol = [
    Extension(
        'pyzol',
        [
            'sources/cpp/wrapper.cpp',
            'sources/cpp/zfs.cpp',
            'sources/cpp/pool.cpp',
        ],
        language='c++',
        extra_compile_args=['-std=c++11'],
        include_dirs=[
            pybind11.get_include(),
            '/usr/include/libzfs',
            '/usr/include/libspl',
            '/usr/include/lib',
        ],
        library_dirs=[
            '/usr/lib',
        ],
        libraries=['zfs', 'zpool', 'nvpair'],
    ),
]

setup(
    name=project,
    version=release,
    ext_modules=pyzol,
)
