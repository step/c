#! /bin/bash

rm -rf bin
mkdir -p bin
for i in `ls examples/*.c`; do
  executable=`echo ${i} | sed 's/examples\///' | sed "s/.c$//"`
  gcc -o bin/${executable} ${i} 2>/dev/null
done