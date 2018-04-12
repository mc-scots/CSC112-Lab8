## Introduction

This lab is all about debugging. You will fix a program, which you did
not write, but are somehow now responsible for. This program does not
remotely work\! I tried to make it a simple program, but one with some
non-obvious errors. The real point of the lab is not so much the
program, but rather to learn how to use a new tool.

You will be using the gnu debugger (gdb). We went over the basics of
using gdb in class, and you will likely want to have the lecture slides
handy while doing this lab.

### The Sample Program

The program you will debug is intended to compute the sum of all natural
counting numbers less than some given n. For instance, if the user
enters 3, it should compute 1+2+3=6. Or if you enter 5, 1+2+3+4+5=15,
and so on.

Of course, if you know your famous math stories, you know it has a
closed form solution (n\*(n+1))/2, but we are going to pretend we don't
know that and sum it using a loop. The program code which does this, or
attempts to do this is provided for you. You will be using the debugger
to fix it\!

## Creating the Makefile

Your first task is to write a Makefile which will compile sumnum. Make
sure that your Makefile compiles the program with debugging symbols
turned on.

## Proving You Used GDB

Ok, so you could probably just read the program and find the errors.
That would violate the spirit of this assignment, however, so I have to
have some evidence you really used the debugger. To do this, you are
going to use the script program. To get started, do the following

` script lab7-scriptfile`

This will record everything you type and see in your terminal to the
file named lab7-scriptfile. Now, go ahead and compile your program and
start gdb.

## Find the Bugs

Now it's all you\! Explore, find the errors and fix them. Watch the
program execute and work out where it goes wrong. Try exploring as many
of GDB's features as possible. Don't close your terminal during your
debug session or you may lose your script file\!

Once you have corrected the errors and verified that the program works,
simply type:

` exit`

to stop recording your script file.

Good luck squishing those bugs, and as always, enjoy\!
