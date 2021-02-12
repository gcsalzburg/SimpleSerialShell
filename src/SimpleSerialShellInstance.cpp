#include <Arduino.h>
#include <SimpleSerialShell.h>

////////////////////////////////////////////////////////////////////////////////
/*!
 *  @file SimpleSerialShellInstance.cpp
 *
 *  Default instance for the shell.
 *
 *  Note that if you never refer to this "shell" object,
 *  the linker won't need this file and won't allocate this buffer.
 *
 *  That is useful if you need a different buffer size for your own application.
 *  Just avoid using "shell" and instead only use your own instance.
 */

char inputLine[SIMPLE_SERIAL_SHELL_BUFSIZE];

SimpleSerialShell shell(inputLine, SIMPLE_SERIAL_SHELL_BUFSIZE);

