Boost.Build MATLAB Module
=========================

Overview
--------

This Boost.Build module provides support for integrating C and C++
code with MATLAB.

This is a work in progress and this module provides the bare minimum
to use MATLAB with Boost.Build.

Supported Platforms
-------------------

This module supports any platform for which MATLAB is available.

Features
--------

* Engine
* MAT Files
* MEX Files
* MATLAB

Usage
-----

.. code::

   # project-config.jam

   modules.load matlab : /path/to/matlab.jam ;

   exe test_matlab.cpp matlab-engine ;
