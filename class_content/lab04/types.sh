#!/usr/bin/env bash

age="Thirtyfive"

name=8

if [[ "$name" -eq "Dinesh" ]]
then
    echo "Hello $name"
    echo "Next year, you will be $((age+1)) old"
else
    echo "Bye $name"
    if [[ "$age" -ne "1" ]]
    then
        echo "Last year, you were $((age-1)) old"
    else
        echo "Last year, you were not even born"
    fi
fi
