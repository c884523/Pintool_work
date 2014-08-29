g++ main.cpp 
sudo ../../../../pin -t ../obj-intel64/pinatrace.so -- ./a.out
cat pinatrace.out | cut -d ' ' -f3  > input 
#wc -l pinatrace.out
