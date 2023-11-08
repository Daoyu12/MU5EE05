#!/bin/sh

# grep: chercher
# -O telecharger

#!/bin/bash
# Nombre d'images à télécharger
nombre_page=10
url = "http://xkcd.com/"

for i in $(seq 1 $nombre_page); do
    #Dans le ième page de web
    wget http://xkcd.com/$i -O $i
    #URL de image
    image_url=`grep -i hotlink $i | grep -o 'https.*jpg"' | grep -o 'https.*jpg'`

    echo "URL de l'imgame : $image_url"

    #telecharger
    wget $image_url -O $i.jpg
    #afficher l'image
    eog $i.jpg
done