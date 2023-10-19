#!/bin/bash

lab4="/home/daoyu/Desktop/MU5EE05/partie_1/lab4"

for dossier in "$lab4"/*; do
    if [ -d "$dossier" ] ; then
            echo "répertoire : $dossier"
    fi
done