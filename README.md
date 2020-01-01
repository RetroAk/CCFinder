Tested on last Ubuntu version and Centos (make sure you have last g++ version)


***CLONING IN DEBIAN/UBUNTU***

sudo apt update && sudo apt install git -y && git clone -b Linux-version https://github.com/independentcod/CCFinder.git

***CLONING IN CENTOS***

sudo yum install git -y && git clone -b Linux-version https://github.com/independentcod/CCFinder.git


***COMPILING IN DEBIAN/UBUNTU***

sudo apt update && sudo apt install libboost-all-dev g++ -y && cd CCFinder && g++ ccfinder.cpp -o ccfinder -lboost_filesystem -lboost_system -lboost_iostreams -lboost_regex

***COMPILING IN CENTOS***

sudo yum upgrade -y && sudo yum install boost-devel -y && cd CCFinder && g++ ccfinder.cpp -o ccfinder -lboost_filesystem -lboost_system -lboost_iostreams -lboost_regex



***INSTALLING IN ALL DISTROS***

sudo cp ccfinder /usr/sbin



***RUNNING***

sudo ccfinder /


