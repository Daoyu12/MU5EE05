Pour voir cet appareil apparaître en regardant la sortie de la commande dmesg
"crw-rw---- 1 root dialout 188, 0 déc.   7 10:16 /dev/ttyUSB0" affiche que un accès en lecture et en écriture à ce prériphérique.
"sudo adduser daoyu dialout" pour ajouter l'utilisateur au groupe
Commande "reboot" pour redémarrer complètement le système. Vérifier avec la command "cat /etc/group" que l'utilisateur "daoyu:x:1000:" est dans le dialout.
"picocom -b 115200 /dev/ttyUSB0" pour démarrer la communication série sur /dev/ttyUSB0
"sudo raspi-config" pour vérifier que y arriver et y accéder au menu de configuration des interfaces d’entrées/sortie de la carte.
"sudo apt install net-tools" pour installer l'outil net-tools. Et ensuite nous pouvons lancer la commande ifconfig pour identifier si votre OS arrive à détecter ou pas la nouvelle interface.
"sudo /etc/init.d/networking restart" pour "Restarting networking (via systemctl): networking.service."
"ifconfig" pour afficher des informations sur les interfaces réseau, et pour activer ou désactiver une interface réseau.
rancher l’adaptateur Ethernet.
"ifconfig" pour identifier si votre OS arrive à détecter ou pas la nouvelle interface. (eth0)
On configure adresse IPV4 : 192.168.0.1 Net mask : 255.255.255.0 sur le PC.
"sudo /etc/init.d/networking restart" pour redémarrer l'interface ethernet.
"sudo nano /etc/dhcpcd.conf" pour associer l’adresse IP 192.168.0.10 à votre carte et 192.168.0.1 au domaine name server.
"sudo /etc/init.d/networking restart" pour redémarrer l’interface ethernet sur la carte. (reboot). On modifie le fichier /etc/network/interfaces selon le sujet dans pumble. Il affiche "inet 192.168.0.10" pour eth0.
On utilise "ping 192.168.0.10" pour verifier la connectivité. Il affiche "64 bytes from 192.168.0.10: icmp_seq=1 ttl=64 time=0.125 ms"
On active ssh par "sudo raspi-config".
"sudo service ssh status", il affiche "active(running)".
installer un client ssh
On établie ssh par "ssh daoyu@192.168.0.1"
"scp 333.txt daoyu@192.168.0.10:/home/daoyu" pour envoyer le fichier 333.txt à la carte. Après entrer le mot de passe.

