#!/bin/bash


# Pick a number at random between 1 and 10
# Ask user for a guess
# Based on the guesss tell whether the value is high or low
# Repeat till the user gets the number


random_value=$(shuf -i 1-10 | head -n 1)

user_input=""
tries=0

while [[ "$user_input" != "$random_value" ]]
do
	read -p "Enter a guess " user_input

	if [[ $user_input == $random_value ]]
	then
		echo "Matching ! Correct"
	elif [[ $user_input -gt $random_value ]]
	then
		echo "Too big"
	else
		echo "Too small"
	fi
	tries=$(($tries+1))
done

echo "Found in $tries tries"

