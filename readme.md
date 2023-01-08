# **Dumping Computer Graphics Lab works**

## **To setup graphics.h:**

From bgi_files folder,
->Copy .a file to lib folder of compiler
->Copy .h file to include folder of compiler

## **To compile:**

By linking the following libraries while compiling:

```
-lbgi
-lgdi32
-lcomdlg32
-luuid
-loleaut32
-lole32
```

OR, by editing the bat file:
rename the .cpp filename in run.bat to the file to be compiled and execute the bat file from terminal.