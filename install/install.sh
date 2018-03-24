# Resolution du probleme stdin 
# lien vers la page : http://serverfault.com/questions/500764/dpkg-reconfigure-unable-to-re-open-stdin-no-file-or-directory

# Changement de la langue
sudo su
echo "export LANGUAGE=en_US.UTF-8" >> /etc/profile
echo "export LANG=en_US.UTF-8" >> /etc/profile
echo "export LC_ALL=en_US.UTF-8" >> /etc/profile
echo "locale-gen en_US.UTF-8" >> /etc/profile
echo "dpkg-reconfigure locales" >> /etc/profile
# Fin du blick potentiellement dangereu

# PREREQUIS DE BASE

apt-get update
apt-get install --yes vim 
apt-get install --yes ssh
apt-get install --yes rsync
sudo apt-get install --yes software-properties-common
sudo --yes add-apt-repository ppa:george-edison55/cmake-3.x
sudo apt-get updates
apt-get install --yes build-essential
apt-get install --yes cmake
apt-get update
apt-get install --yes g++-6
ln -f -s /usr/bin/g++-6 /usr/bin/g++

# Violation des droits pour permettre à un utilisation d'exécuter le POC
chmod -Rf 777 /vagrant

exit # On sort du mode Sudo su