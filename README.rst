Boost.Build Module for MATLAB
=============================

.. contents::

Overview
--------

This directory contains a Boost.Build module for integrating with
MATLAB.

Module
------

See the `documentation <matlab.rst>`__ for a description on how to use
the MATLAB module.

See the `implementation file <matlab.jam>`__ for implementation
details.

Testing
-------

This project contains rudimentary tests for the ``matlab`` module.
These can be run by running the following command from the root
directory.

.. code::

   $ cd test && b2 --verbose-test
