# Tools_Libs_common
basic tools and libs

[![Build Status](https://travis-ci.org/tsbxmw/Tools_Libs_common.svg?branch=master)](https://travis-ci.org/tsbxmw/Tools_Libs_common)

## log & all2string lib

* in windows, output a time log is not easy, logtool & all2string would make it easy

### how to use it?

* 1, include .h file
* 2, .lib is also nessary in linked input 
* 3, but you should build it to your current platform

### function

* string timenow() : to return the time now
* void logwrite(string logname, string logstr) : write the logstr to logname file with time 
* void logshow(string funcname, int loglevel, string logstr) : show logstr with funcname and time, write it to logname file
