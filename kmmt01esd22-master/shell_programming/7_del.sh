#Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it.

#!/bin/sh
echo enter file name
read file
echo enter word
read word
echo file before removing $word:
cat $file
grep -v -i $word $file > test
mv test $file
echo file after removing $word:
cat $file
