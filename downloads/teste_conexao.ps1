
################################################################
#
# Script utilizado para testar a conectividade de computadores
# Angelito M. Goulart
# 12/06/2012
#
################################################################

# Array com servidores que serao testados
$servidores = "google.com", "terra.com.br", "globo.com"

echo "Iniciando teste de conexao..."

# Percorre cada servidor
ForEach($servidor in $servidores){

    # Obtem a data e a hora do teste
    $data = get-date -uformat %d/%m/%Y-%H:%M:%S
    
    # Testa a conexao e exibe o resultado
    if (Test-Connection -ComputerName $servidor -Count 1 -quiet){
        echo "Conectado a | $servidor | com sucesso! $data"
    } else {
        echo "Erro ao se conectar em | $servidor | ! $data"
    }
    
 }