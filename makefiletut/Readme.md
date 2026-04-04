# Makefile Syntax
[Original Source](https://makefiletutorial.com/#getting-started)    
A Makefile consists of a set of rules. A rule generally looks like this:   
```
targets: prerequisites
	command
	command
	command
```   
- The targets are file names, separated by spaces. Typically, there is only one per rule.
- The commands are a series of steps typically used to make the target(s). These need to start with a tab character, not spaces.
- The prerequisites are also file names, separated by spaces. These files need to exist before the commands for the target are run. These are also called dependencies   
### Example  
```
hello:
	echo "Hello, World"
	echo "This line will print if the file hello does not exist."
```  
### For current file
Makefile content
```
file1:
	gcc file1.c -o file1
``` 
To execute this makefile, use the following command 
```
make file1
```
The output is file1.exe in the same folder and to run it, use the following command
```
./file1.exe
```  
The output will be the following as implemented in the C file 
```
Makefile tutorial
```  
To clean the generated .exe file/files, after making changes in the make file, use the command
```
make clean
``` 