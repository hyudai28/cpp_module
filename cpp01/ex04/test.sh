make re
./replace Makefile CXX CPP
./replace Makefile.replace CPP C
./replace Makefile.replace.replace C CC
./replace Makefile.replace.replace.replace CC C



# fail case
./replace Makefile.replace.replace.rep CC C
./replace
./replace Makefile CC C CCCC
