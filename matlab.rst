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

   using matlab ;
   using matlab : R2017b ;
   using matlab : : /Applications/MATLAB_R2017b.app/bin/matlab ;
   using matlab : R2017b : /Applications/MATLAB_R2017b.app/bin/matlab ;

   exe test_matlab.cpp /matlab//matlab ;

   exe test_matlab.cpp /matlab//eng ;
   exe test_matlab.cpp /matlab//mex ;
   exe test_matlab.cpp /matlab//mat ;
   exe test_matlab.cpp /matlab//mx ;
