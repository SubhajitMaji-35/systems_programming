#!/bin/bash

# Bash examples on using conditional expressions

height=170
name="Deepak"

[[ $height -gt 170 && $name == "Deepak" ]] && echo "Deepak is taller than 170."


height=170
name="Deepak"

if [[ $height -gt 170 && $name == "Deepak" ]]; then
  echo "Deepak is taller than 170."
fi


user="admin"

if [[ $user == "root" || $user == "admin" ]]; then
  echo "The user is either root or admin."
else
  echo "The user is neither root nor admin."
fi


filename="example.txt"

if [[ ! -e $filename ]];then
  echo "The file does not exist."
else
  echo "The file exists."
fi


number=30
user="admin"

if [[ $number -ge 10 && $number -le 50 && ( $user == "root" || $user == "admin" ) ]]; then
  echo "The number is between 10 and 50, and the user is either root or admin."
else
  echo "Either the number is not between 10 and 50, or the user is neither root nor admin."
fi


