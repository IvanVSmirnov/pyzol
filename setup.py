#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
.. moduleauthor:: Ivan Smirnov <ivsmir@gmail.com>
"""

from distutils.core import setup, Extension
from doc.source.conf import project, release
import pybind11

modules = [
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
        library_dirs = [
            '/usr/lib',
        ],
        libraries=['zfs', 'zpool', 'nvpair'],
    ),
]

setup(
    name = project,
    version = release,
    ext_modules = modules,
    package_data = {'': ['lib/*.so']},
)
