#!/usr/bin/python

import os

VariantDir('build', 'src', duplicate=0)

env = Environment(ENV=os.environ, tools=['mingw'])

env.Program(['build/testcases.cpp'], LIBS = 'stack', LIBPATH = '.')

env.Library('build/stack', ['build/libstack/libstack.cpp'])

#
# vim: set expandtab tabstop=4 shiftwidth=4 syntax=python:
#

