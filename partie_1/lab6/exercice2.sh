#!/bin/bash

nombre1="$1"
nombre2="$2"

if [ "$nombre1" -lt "$nombre2" ]
    then
        echo "Le nombre $nombre1 est inférieur au nombre $nombre2"
elif [ "$nombre1" -gt "$nombre2" ] 
    then
        echo "Le nombre $nombre1 est supérieur au nombre $nombre2"
else
        echo "Le nombre $nombre1 est égal au nombre $nombre2"
fi