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

#### timenow()

* string timenow() : to return the time now

    public string timenow()
    using to return the localtime.

#### logwrite(string logname, string logstr)

* void logwrite(string logname, string logstr) : write the logstr to logname file with time 

    public void logwrite(string logname, string logstr)
    using to write log strings to file named logname

#### logshow(string funcname, int loglevel, string logstr)

* void logshow(string funcname, int loglevel, string logstr) : show logstr with funcname and time, write it to logname file

    public void logshow(string funcname, int loglevel, string logstr)
    using to format log output (default write to funcname)
