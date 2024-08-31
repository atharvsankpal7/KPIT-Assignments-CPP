python C:/cxxtest-4.4/bin/cxxtestgen --error-printer test.h -o test.cpp
g++ -I C:/cxxtest-4.4 bitmap.cpp test.cpp -o runner.exe
./runner.exe