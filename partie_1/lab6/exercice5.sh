#!/bin/bash

repertoire="$1"

if [ -d "$repertoire" ]; then
    cd "$repertoire" 
    for dossier in *; do
        if [ -d "$dossier" ]; then
            echo "Répertoire : $dossier"
        fi
    done
else
    echo "Le chemin spécifié n'est pas un répertoire valide."
    exit 1
fi