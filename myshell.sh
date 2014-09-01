g++ main.cpp -o main 
sudo ../../../../pin -t ../obj-intel64/pinatrace.so -- ./a.out
cat pinatrace.out | cut -d ' ' -f3 > All_trace
cat All_trace | sort | uniq -c > tmp_file 
cat tmp_file | awk '$1 > 10 {print $1" "$2}' > Part_sum
rm tmp_file
wc -l Part_sum 
