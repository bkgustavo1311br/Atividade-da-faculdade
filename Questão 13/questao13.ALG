algoritmo "somatorio"

var
    x, resultado: real
    i: inteiro

início
    resultado <- 0
    
    escreva("Digite o valor de X: ")
    leia(x)
    
    para i <- 25 até 1 passo -1 faça
        se i mod 2 = 0 então
            resultado <- resultado - (x * i / (26 - i))
        senão
            resultado <- resultado + (x * i / (26 - i))
        fimse
    fimpara
    
    escreva("O resultado do somatório é: ", resultado)
    
fim_algoritmo