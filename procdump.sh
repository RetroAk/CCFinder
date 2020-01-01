for i in $(ps -axo pid)
do
procdump -p $i
done
