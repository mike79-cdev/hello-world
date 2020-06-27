#!/bin/bash

if (($# == 2))
then
	echo "$1 $2"
	let RESULT=$1+$2
	echo "Ergebnis: $RESULT"
else
	echo "Falsche Anzahl !"
fi

echo "$0"




