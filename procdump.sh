for i in $(ps -axo pid)
do
sudo procdump -p $i
done
