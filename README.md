# Simple_shell

## Learning Objectives

	* At the end of this project, you are expected to be able to explain to anyone, without the help of Google

## General
	* Who designed and implemented the original Unix operating system
	* Who wrote the first version of the UNIX shell
	* Who invented the B programming language (the direct       predecessor to the C programming language)
	* Who is Ken Thompson
	* How does a shell work
	* What is a pid and a ppid
	* How to manipulate the environment of the current process
	* What is the difference between a function and a system call
	* How to create processes
	* What are the three prototypes of main
	* How does the shell use the PATH to find the programs
	* How to execute another program with the execve system call
	* How to suspend the execution of a process until one of its  children terminates
	* What is EOF / “end-of-file”?

## Simple Shell

	* The shell is a command interpreter that provides a user interface for accessing operating system services.
	The shell interprets certain commands that provide a function to the user to do certain processes.

#### Ejecution

	$ ./hsh
	#CISFUN$ (Print comand)
	AUTHORS  execute.c  flowchart.jpg  fun_aux.c  hsh  main.c  man_1_simple_shell  no_interactive.c  README.md  shell.c  shell.h  signal.c
### Example

	#CISFUN$ /bin/ls


## Operation

	A shell works with an infinite loop, where it will be waiting for a command to be entered to proceed with the execution, this evaluates whether the command entered is valid or not, being negative this statement skips an error in the standard output, if it is positive it processes the execution and executes the command process entered.

	the shell when the exit command is detected, closes the execution process with an output of 127; another way to close this process is with the ctrl + D key combination

## Interactive mode

	* In the interactive way, it is where we interact directly with our shell, run and start entering the commands.

## commands

	* pwd
 	* ls
 	* rm
 	* touch
 	* locate
 	* find
 	* grep
 	* sudo
 	* df
 	* du
 	* head
 	* tail
 	* diff
 	* tar
 	* chmod
 	* chown
 	* jobs
 	* kill
	* ping
 	* wget
 	* uname
 	* top
	* history
 	* man
	* echo
	* zip, unzip
	* hostname
	* useradd, userdel


## Flowchart
![Alt text](flowchart.jpg?raw=true)