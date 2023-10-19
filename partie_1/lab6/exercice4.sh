#!/bin/bash

# entrer une repertoire dans laquelle on veut chercher le dossier
repertoire="$1"

if [ -d "$repertoire" ]; then
    cd "$repertoire" 
    for dossier in *; do
        if [ -d "$dossier" ]; then
            echo "Répertoire : $dossier"
        fi
    done
fi