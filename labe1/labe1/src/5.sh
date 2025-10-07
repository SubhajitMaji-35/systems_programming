#!/bin/bash

count=0

for i in $(dev/stdin/)
do
	if [[ count==1 || count == 4 || count == 9 ]]
	then
		continue
	else
		echo "$i"
	fi
done

