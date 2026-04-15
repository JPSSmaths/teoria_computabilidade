# 🧠 Trabalho AV1 - Teoria da Computabilidade

**Programas, Máquinas e Equivalência**

---

## 👥 Integrantes

* Analice Pinheiro Johnston
* João Pedro Silva da Silva
* Noam Geraldo Ismael Coelho
* Rodrigo Marques

---

## 📚 Disciplina

**Teoria da Computabilidade**  
Professor: Daniel Leal Souza

---

## 🎯 Objetivo do Trabalho

Implementar e analisar uma mesma função computada utilizando três paradigmas diferentes:

* 🔧 **Programa Monolítico** (Assembly)
* 🔄 **Programa Iterativo** (C)
* 🔁 **Programa Recursivo** (C)

Além disso, aplicar o método da **Máquina de Traços** para verificar equivalência forte entre os programas.

---

## 🧮 Função Computada

### Função: Fatorial (n!)

**Definição Matemática:**
- f(n) = n! = n × (n-1) × (n-2) × ... × 1
- f(0) = 1 (por convenção)

**Entrada:** Inteiro n ≥ 0  
**Saída:** Valor de n!

**Exemplos:**
- f(3) = 6
- f(5) = 120
- f(0) = 1

---

## 💻 Linguagens Utilizadas

* **Assembly** (x86 32 bits - NASM)
* **Linguagem C** (C99 ou superior)

---

## 📂 Estrutura do Repositório

```
teoria_computabilidade/
│
├── assembly/
│   └── fatorial.asm           # Programa monolítico
│
├── iterativo/
│   └── fatorial_iterativo.c   # Implementação com loop
│
├── recursivo/
│   └── fatorial_recursivo.c   # Implementação recursiva
│
├── docs/                       # Documentação formal
│   ├── maquina_de_tracos.txt  # Análise com máquina de traços
│   └── apresentacao.pdf       # Slides da apresentação
│
└── README.md                   # Este arquivo
```

---

## ▶️ Como Executar

### 🔹 Assembly (Linux - NASM)

```bash
cd assembly/
nasm -f elf32 fatorial.asm -o fatorial.o
ld -m elf_i386 fatorial.o -o fatorial
./fatorial
```

**Requisitos:** NASM, ld (GNU binutils)

---

### 🔹 Programa Iterativo (C)

```bash
cd iterativo/
gcc fatorial_iterativo.c -o fatorial_iterativo
./fatorial_iterativo
```

**Requisitos:** GCC ou Clang

---

### 🔹 Programa Recursivo (C)

```bash
cd recursivo/
gcc fatorial_recursivo.c -o fatorial_recursivo
./fatorial_recursivo
```

**Requisitos:** GCC ou Clang

---

## 🔍 Análise Formal - Máquina de Traços

A equivalência entre os programas foi verificada utilizando o modelo formal de **Máquina de Traços**, conforme apresentado em aula.

### 📌 Programa Abstrato (P)

```
1: faça F vá_para 2
2: faça H vá_para 3
3: se T vá_para 6 senão vá_para 4
4: faça G vá_para 5
5: faça H vá_para 3
6: parada
```

**Onde:**
- **F** = Operação inicial (configuração de resultado)
- **H** = Operação repetida (iteração)
- **G** = Operação de multiplicação
- **T** = Teste de parada (i > n)

### 📥 Computação Completa

A computação formal completa da Máquina de Traços encontra-se documentada em detalhes no arquivo [docs/maquina_de_tracos.txt](docs/maquina_de_tracos.txt), incluindo:

- ✓ Todas as configurações de execução
- ✓ Passos intermediários
- ✓ Estados finais
- ✓ Análise de equivalência forte entre as três implementações

---

## ✅ Resultados da Equivalência

Os três programas são **fortemente equivalentes**, pois:

| Critério | Assembly | Iterativo | Recursivo |
|----------|----------|-----------|-----------|
| Função Computada | Fatorial | Fatorial | Fatorial |
| Entrada (n=3) | 6 | 6 | 6 |
| Entrada (n=5) | 120 | 120 | 120 |
| Passos Executados | Equivalentes | Equivalentes | Equivalentes |
| Máquina de Traços | ✓ | ✓ | ✓ |

---

## ⚠️ Exemplos de Não-Equivalência

### Versão Incorreta (Iterativo com Erro)

```c
for(int i = 1; i < n; i++)  // ERRO: deveria ser i <= n
```

**Resultado para f(3):**
- Versão correta: 6
- Versão com erro: 2 (uma iteração a menos)

**Análise:** A divergência ocorre na Máquina de Traços devido à redução no número de iterações, alterando significativamente a função computada.

---

## 📌 Observações Importantes

* ✓ Os valores de entrada foram definidos diretamente no código para facilitar a análise formal
* ✓ O Assembly utiliza controle de fluxo por saltos (`jmp`), caracterizando um programa monolítico
* ✓ O foco do trabalho está na análise formal, não na interface de entrada/saída
* ✓ Cada paradigma ilustra um modelo diferente de computação

---

## 🤖 Uso de Inteligência Artificial

**Ferramenta:** ChatGPT / GitHub Copilot

**Finalidades:**
* Apoio na estruturação do projeto
* Revisão de código
* Explicações conceituais
* Otimização de algoritmos

⚠️ **Nota:** Todo o conteúdo foi revisado e validado pela equipe.

---

## 📚 Referências

* Material da disciplina - Teoria da Computabilidade
* Slides apresentados em aula
* **Livro:** *Teoria da Computação* – Tiaraju Asmuz Diverio e Paulo Fernando Blauth Menezes
* **Documentação NASM:** https://www.nasm.us/

---

## 🎤 Conclusão

Este trabalho permitiu aprofundar a compreensão sobre a equivalência entre diferentes paradigmas de programação e a importância da análise formal através da **Máquina de Traços** como ferramenta de verificação de equivalência entre programas.

---

**Data:** Abril de 2026  
**Status:** ✅ Completo
