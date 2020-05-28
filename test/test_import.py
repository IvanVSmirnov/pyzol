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


import pytest

def test_library_import():
    """Test for shared library (.so) can be loaded to python interpreter"""
    import pyzol