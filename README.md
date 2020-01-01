***CLONING***

git clone -b Linux-version https://github.com/independentcod/CCFinder.git


***COMPILING***

sudo apt update && sudo apt install libboost-all-dev

g++ ccfinder.cpp -o ccfinder -lboost_filesystem -lboost_system -lboost_iostreams -lboost_regex



***INSTALLING***

sudo cp ccfinder /usr/sbin



***RUNNING***

sudo ccfinder

