########################
# Script Backup Simples
#
# Angelito M. Goulart
#
# 20/07/2010
########################

#define a origem
$origem = "E:\banco.mdb"

#fornece a data atual
$data = get-date -uformat "%d%m%Y"

#destino
$destino = "c:\backups\backup" + $data + ".mdb"

#segundo destino
$destino2 = "e:\backups\" + $data + ".mdb"

#copia do arquivo
copy $origem $destino
copy $origem $destino2

