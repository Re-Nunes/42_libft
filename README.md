# *This project has been created as part of the 42 curriculum by renatanu.*

# Libft - Seu primeiro projeto na 42

## Descrição

O projeto **Libft** consiste na criação de uma biblioteca individual em C contendo diversas funções de uso geral que servirão como base para os futuros projetos da 42. O objetivo principal é compreender profundamente o funcionamento interno das funções clássicas da `libc`, implementando comportamentos de baixo nível através de manipulação de memória e aritmética de ponteiros.

---

## Instruções

### Compilação e Instalação

A compilação da biblioteca é gerenciada por um `Makefile` que utiliza o compilador `cc` com as flags obrigatórias `-Wall -Wextra -Werror`. 
A biblioteca estática é gerada na raiz do repositório através do comando `ar`.

### Regras do Makefile

* **`make` ou `make all`**: Compila os arquivos fontes e gera o arquivo da biblioteca `libft.a`.
* **`make clean`**: Remove todos os arquivos objeto (`.o`) gerados durante a compilação.
* **`make fclean`**: Remove os arquivos objeto e a biblioteca estática compilada (`libft.a`).
* **`make re`**: Executa `fclean` seguido de `make` para forçar uma recompilação completa do projeto.
* **`make bonus`**: Compila e adiciona as funções de listas encadeadas à biblioteca.

---

## Visão Geral da Biblioteca

A biblioteca é estruturada em três partes principais, totalizando as funções obrigatórias e os bônus declarados no arquivo `libft.h`.

### 1. Funções da Libc (Parte 1)
Reimplementações de funções padrões do C que possuem o prefixo `ft_` e replicam o comportamento exato de suas respectivas *man pages*:

* **Verificação de Caracteres**: 
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.

* **Manipulação de Strings**: `ft_strlen`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`.

* **Manipulação de Memória**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.

* **Alocação Dinâmica**: `ft_calloc`, `ft_strdup`, `ft_atoi`.

### 2. Funções Adicionais (Parte 2)
Funções utilitárias que não estão presentes na `libc` padrão ou aparecem em formatos customizados:

* **Conversão e Divisão**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`.
* **Mapeamento/Iteração**: `ft_strmapi`, `ft_striteri`.
* **Escrita em File Descriptors**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 3. Funções de Lista Encadeada (Bônus / Parte 3)
Funções que utilizam a estrutura de dados `t_list` para gerenciar nós e manipulação de listas:

* **Gerenciamento**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`.
* **Limpeza e Iteração**: `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## Resources

### Referências Utilizadas
* Manuais do Linux (*Man pages* do sistema).
* Normativa de Código da 42 (The Norm).

### Uso de Inteligência Artificial
De acordo com os princípios e diretrizes de IA da 42:

* **Casos de Uso**: A IA foi utilizada para auxiliar na estruturação e validação lógica do `Makefile`, garantindo que não ocorresse o problema de *relinking* involuntário.Também foi empregada para esclarecer dúvidas teóricas sobre o comportamento do qualificador `restrict` (C99) e gerenciamento de ponteiros genéricos `void *`.

* **Abordagem Adotada**: Toda a lógica interna das funções foi desenhada e codificada manualmente de forma a exercitar os fundamentos de programação e garantir o domínio completo do código durante as avaliações por pares e exames.