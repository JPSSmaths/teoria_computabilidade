# 🔍 Análise Formal - Máquina de Traços

Análise formal da equivalência entre os programas utilizando o modelo de **Máquina de Traços** conforme a disciplina de Teoria da Computabilidade.

---

## 📌 Programa Abstrato (P)

```
1: faça F vá_para 2
2: faça H vá_para 3
3: se T vá_para 6 senão vá_para 4
4: faça G vá_para 5
5: faça H vá_para 3
6: parada
```

### Descrição das Operações

| Operação | Descrição |
|----------|-----------|
| **F** | Operação inicial - configuração de resultado |
| **H** | Operação repetida - iteração do loop |
| **G** | Operação de multiplicação - atualização do resultado |
| **T** | Teste de parada - condição i > n |

---

## 📥 Entrada

```
x = 3
```

Calculando o fatorial de 3: f(3) = 3! = 6

---

## 🔁 Computação na Máquina de Traços

### Estados Intermediários

A computação segue a seguinte sequência de configurações:

```
(1, ε)          → Estado inicial - nenhuma operação executada
(2, F)          → Executa operação F (resultado ← 1)
(3, FH)         → Executa operação H (i ← 1)
(4, FH)         → Testa T: i > n? (1 > 3? Não) → vai para linha 4
(5, FHG)        → Executa operação G (resultado ← 1 × 1 = 1)
(3, FHGH)       → Executa operação H (i ← 2)
(4, FHGH)       → Testa T: i > n? (2 > 3? Não) → vai para linha 4
(5, FHGHG)      → Executa operação G (resultado ← 1 × 2 = 2)
(3, FHGHGH)     → Executa operação H (i ← 3)
(4, FHGHGH)     → Testa T: i > n? (3 > 3? Não) → vai para linha 4
(5, FHGHGHG)    → Executa operação G (resultado ← 2 × 3 = 6)
(3, FHGHGHGH)   → Executa operação H (i ← 4)
(4, FHGHGHGH)   → Testa T: i > n? (4 > 3? Sim) → vai para linha 6
(6, FHGHGHGH)   → PARADA - Resultado final: 6
```

### Interpretação

- Cada par `(linha, trace)` representa um estado da máquina
- A **linha** indica a instrução atual
- O **trace** (rastro) é uma sequência de operações já executadas
- O programa termina quando atinge a linha 6 (parada)
- A operação **H** representa o incremento de `i`
- A operação **G** representa a multiplicação `resultado × i`

---

## ✅ Resultado Final

| Componente | Valor |
|-----------|-------|
| **Configuração Final** | (6, FHGHGHGH) |
| **Trace Final** | FHGHGHGH |
| **Resultado Computado** | 6 |
| **Status** | ✓ Parado |

---

## 📊 Análise de Pasos

| Passo | Linha | Operação | Novo Trace | i | resultado | Descrição |
|-------|-------|----------|-----------|---|-----------|-----------|
| 1 | 1 | - | ε | - | - | Início |
| 2 | 2 | F | F | - | 1 | Inicializa resultado |
| 3 | 3 | - | FH | 1 | 1 | Inicializa i |
| 4 | 4 | T | FH | 1 | 1 | Testa i > n? (1 > 3? Não) |
| 5 | 5 | G | FHG | 1 | 1 | Multiplica (1 × 1 = 1) |
| 6 | 3 | - | FHGH | 2 | 1 | Incrementa i |
| 7 | 4 | T | FHGH | 2 | 1 | Testa i > n? (2 > 3? Não) |
| 8 | 5 | G | FHGHG | 2 | 2 | Multiplica (1 × 2 = 2) |
| 9 | 3 | - | FHGHGH | 3 | 2 | Incrementa i |
| 10 | 4 | T | FHGHGH | 3 | 2 | Testa i > n? (3 > 3? Não) |
| 11 | 5 | G | FHGHGHG | 3 | 6 | Multiplica (2 × 3 = 6) |
| 12 | 3 | - | FHGHGHGH | 4 | 6 | Incrementa i |
| 13 | 4 | T | FHGHGHGH | 4 | 6 | Testa i > n? (4 > 3? Sim) |
| 14 | 6 | - | FHGHGHGH | 4 | 6 | **PARADA** - Resultado: 6 |

---

## 🎯 Equivalência entre Implementações

Este programa abstrato é **fortemente equivalente** às três implementações:

### Assembly (Programa Monolítico)
- Implementa o fluxo de controle por saltos (`jmp`)
- Segue exatamente a sequência de operações definida

### C Iterativo
- Implementa o loop com `for` ou `while`
- Executa as mesmas operações na mesma ordem

### C Recursivo
- Implementa através de chamadas recursivas
- Mantém a mesma função computada

---

## 📝 Conclusão

A **Máquina de Traços** demonstra formalmente que as três implementações computam a mesma função, produzindo o mesmo resultado (trace) para a mesma entrada, caracterizando **equivalência forte** entre os programas.

---

**Data de Análise:** Abril de 2026  
**Disciplina:** Teoria da Computabilidade  
**Professor:** Daniel Leal Souza
