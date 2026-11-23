# Lançamento de Projétil

Programa em C++ para console que calcula a **altura máxima**, o **tempo de voo** e o **alcance horizontal** de um projétil lançado com velocidade inicial, aceleração da gravidade e ângulo definidos pelo usuário.

## Funcionalidades

- **Entrada de dados:** velocidade inicial (m/s), aceleração da gravidade (m/s²) e ângulo de lançamento (graus).
- **Validação das entradas:** só aceita velocidade e gravidade positivas e ângulo entre 0° e 90°. Letras ou símbolos no lugar de números são rejeitados.
- **Menu interativo:** o usuário escolhe qual cálculo fazer e pode repetir quantas vezes quiser até escolher sair.
- **Tratamento de opção inválida:** se a opção digitada não existir, o programa avisa e mostra o menu de novo.

## Fórmulas utilizadas

| Cálculo | Fórmula |
|---|---|
| Altura máxima | `y_max = (v₀² · sen²θ) / (2g)` |
| Tempo de voo | `t = (2 · v₀ · senθ) / g` |
| Alcance horizontal | `x_f = (2 · v₀² · senθ · cosθ) / g` |

O ângulo é digitado em graus e convertido para radianos (`θ · π / 180`), pois as funções `sin()` e `cos()` do C++ trabalham em radianos.

## Tecnologias

- **C++**
- Bibliotecas: `iostream`, `cmath`, `cstdlib`, `clocale` e `limits`

## Como compilar e executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/seu-repositorio.git
   ```
2. Compile com o g++:
   ```bash
   g++ projetil.cpp -o projetil
   ```
3. Execute:
   ```bash
   ./projetil        # Linux/macOS
   projetil.exe      # Windows
   ```

> Se os acentos aparecerem errados no terminal do Windows, salve o arquivo em UTF-8 e rode `chcp 65001` antes de executar.

## Exemplo de uso

Entradas: velocidade `20` m/s, gravidade `9.8` m/s² e ângulo `45°`.

| Opção | Resultado aproximado |
|---|---|
| 1) Altura máxima | 10,20 m |
| 2) Tempo de voo | 2,89 s |
| 3) Alcance horizontal | 40,82 m |

## Estrutura do projeto

```
└── projetil.cpp
```

## O que este projeto pratica

- Entrada e saída de dados com `cin` e `cout`
- Variáveis e tipos numéricos (`double`, `int`)
- Condicionais (`if`, `else if`) e validação de entrada
- Laço de repetição (`do-while`) para o menu
- Funções matemáticas (`sin`, `cos`, `pow`, `acos`)
- Conversão de graus para radianos
- Física: lançamento oblíquo

## 📄 Licença

Projeto de estudo. Sinta-se à vontade para usar como referência.
