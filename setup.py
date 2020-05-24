#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
.. moduleauthor:: Ivan Smirnov <ivsmir@gmail.com>
"""

from distutils.core import setup, Extension
from doc.source.conf import project, release
import pybind11

binding = [
    Extension(
        project,
        ['sources/cpp/libzfs_wrapper.cpp'],
        extra_compile_args=['-std=c++11',
                            '-L/usr/lib'],
        include_dirs=[
            pybind11.get_include(),
            '/usr/include/libzfs',
            '/usr/include/lib',
            '/usr/include/libspl'
        ],
        language='c++',
        libraries=['nvpair', 'zfs_core'],
    ),
]

setup(
    name=project,
    version=release,
    ext_modules=binding
)
