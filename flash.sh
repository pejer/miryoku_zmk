#! /bin/bash 
echo "This will build the and flash in one go. Enjoy"
docker-compose run kyria

echo "Reset right board..."
sleep 10
echo "Copying right firmware now..."
cp ./build/right.uf2 /Volumes/NICENANO/
sleep 2
echo "Copy complete - now reset left half"
sleep 10
cp ./build/left.uf2 /Volumes/NICENANO/
sleep 2
echo "Copy complete - enjoy"
