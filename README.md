Tested on last Ubuntu version, experimental in Centos.


***CLONING IN DEBIAN/UBUNTU***

sudo apt update && sudo apt install git -y && git clone -b Linux-version https://github.com/independentcod/CCFinder.git

***CLONING IN CENTOS***

sudo yum install git -y && git clone -b Linux-version https://github.com/independentcod/CCFinder.git


***COMPILING IN DEBIAN/UBUNTU***

sudo apt update && sudo apt install libboost-all-dev g++ -y && cd CCFinder && g++ ccfinder.cpp -o ccfinder -lboost_filesystem -lboost_system -lboost_iostreams -lboost_regex

***COMPILING IN CENTOS***

sudo yum upgrade -y && sudo yum install boost-devel libboost-devel -y && cd CCFinder && g++ ccfinder.cpp -o ccfinder -lboost_filesystem -lboost_system -lboost_iostreams -lboost_regex


***RUNNING***

sudo ./ccfinder /


