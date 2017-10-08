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

This project contains tests for the ``matlab`` module.

To test the minimum configuration, run the following command from the
root directory.

.. code::

   $ cd test/test_default && b2 --verbose-test

To run all the test configurations, run the following command from the
root directory.

.. code::

   $ for d in test/test_* ; do pushd ${d} ; b2 --verbose-test ; popd ; done
