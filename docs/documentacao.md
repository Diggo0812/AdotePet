# Documentação do Projeto AdotePet

## 1. Descrição do Projeto

O AdotePet é um sistema desenvolvido em Linguagem C com o objetivo de auxiliar no gerenciamento de adoção de animais.

A aplicação será voltada para ONGs, abrigos ou protetores de animais que necessitam organizar informações sobre animais disponíveis para adoção, pessoas interessadas e adoções realizadas.

O sistema será executado inicialmente através do terminal e contará com um menu para acesso às suas funcionalidades.

---

## 2. Definição do Problema

ONGs, abrigos e protetores podem possuir diversos animais aguardando adoção.

Quando essas informações não estão organizadas, pode ser difícil controlar quais animais ainda estão disponíveis, quais já foram adotados e quem realizou determinada adoção.

O AdotePet busca organizar essas informações em um único sistema, facilitando o cadastro e a consulta dos dados relacionados ao processo de adoção.

---

## 3. Objetivo Geral

Desenvolver um sistema em Linguagem C capaz de gerenciar animais disponíveis para adoção, adotantes e adoções realizadas.

O projeto também tem como objetivo aplicar na prática os conceitos estudados na disciplina de Linguagem e Técnicas de Programação.

---

## 4. Objetivos Específicos

O sistema deverá permitir:

- Cadastrar animais;
- Listar animais disponíveis para adoção;
- Buscar animais cadastrados;
- Cadastrar adotantes;
- Registrar uma adoção;
- Consultar adoções realizadas;
- Alterar a situação de um animal após sua adoção;
- Exibir estatísticas dos animais cadastrados.

---

## 5. Solução Proposta

A solução será desenvolvida utilizando a Linguagem C.

Ao iniciar o programa, o usuário terá acesso a um menu principal contendo as funcionalidades do sistema.

Exemplo:

1 - Cadastrar animal  
2 - Listar animais disponíveis  
3 - Buscar animal  
4 - Cadastrar adotante  
5 - Realizar adoção  
6 - Consultar adoções  
7 - Exibir estatísticas  
0 - Sair  

Após selecionar uma opção, o sistema executará a funcionalidade correspondente e retornará ao menu principal.

---

## 6. Módulos do Sistema

### 6.1 Módulo de Animais

Responsável pelo cadastro, consulta, busca e controle da situação dos animais.

### 6.2 Módulo de Adotantes

Responsável pelo cadastro das pessoas interessadas em realizar uma adoção.

### 6.3 Módulo de Adoções

Responsável por relacionar um animal disponível com um adotante cadastrado e registrar a adoção.

### 6.4 Módulo de Estatísticas

Responsável por apresentar informações gerais, como quantidade de animais cadastrados, disponíveis e adotados.

---

## 7. Tecnologias Utilizadas

- Linguagem C;
- Git;
- GitHub.

---

## 8. Integrantes

- Rodrigo Barbosa da Silva RA:26014295-2
- Felipe Carvalho dos Santos RA: 26009536-2
- Thays Ramos Hernandes RA: 26014279-2

## 9. Estruturas e Dados Utilizados

Para organizar as informações do sistema serão utilizadas estruturas de dados da Linguagem C.

### Pet

A estrutura Pet será responsável por armazenar as informações dos animais cadastrados.

Dados previstos:

- Código do animal;
- Nome;
- Espécie;
- Raça;
- Idade;
- Sexo;
- Situação da adoção (disponível ou adotado).

### Adotante

A estrutura Adotante será responsável por armazenar as informações das pessoas interessadas na adoção.

Dados previstos:

- Código do adotante;
- Nome;
- Telefone;
- Cidade.

### Adoção

A estrutura Adoção será utilizada para registrar a relação entre o animal e o adotante.

Dados previstos:

- Código da adoção;
- Código do animal;
- Código do adotante;
- Data da adoção.

Durante o desenvolvimento, os dados poderão ser armazenados inicialmente utilizando vetores e estruturas (struct) da Linguagem C.

---

## 10. Estrutura Lógica

O sistema será controlado por um menu principal.

Ao iniciar o programa, o usuário poderá selecionar uma das funcionalidades disponíveis.

A lógica geral será:

1. Iniciar o sistema;
2. Exibir o menu principal;
3. Solicitar uma opção ao usuário;
4. Identificar a opção selecionada;
5. Executar a funcionalidade correspondente;
6. Retornar ao menu principal;
7. Repetir o processo até que o usuário escolha a opção de sair;
8. Encerrar o sistema.

Durante o desenvolvimento serão utilizadas estruturas condicionais, estruturas de repetição, funções, vetores e estruturas de dados.

---

## 11. Fluxograma Geral

INÍCIO  
↓  
Exibir Menu Principal  
↓  
Ler opção do usuário  
↓  
Verificar opção escolhida  
↓  
Executar funcionalidade  
↓  
Retornar ao Menu  
↓  
Opção escolhida é "Sair"?

NÃO → Retornar ao Menu Principal  
SIM → Encerrar o sistema  
↓  
FIM

---

## 12. Fluxograma do Processo de Adoção

INÍCIO  
↓  
Informar código do animal  
↓  
Verificar se o animal existe  
↓  
Animal encontrado?

NÃO → Informar "Animal não encontrado"

SIM → Verificar situação do animal  
↓  
Animal está disponível?

NÃO → Informar "Animal já adotado"

SIM → Informar adotante  
↓  
Verificar cadastro do adotante  
↓  
Registrar adoção  
↓  
Alterar situação do animal para "Adotado"  
↓  
Exibir confirmação da adoção  
↓  
FIM

---

## 13. Considerações Finais

O projeto AdotePet propõe uma solução para organizar o processo de adoção de animais por meio de um sistema desenvolvido em Linguagem C.

Nesta etapa inicial foram definidos o problema, a solução proposta, as funcionalidades, os módulos, os dados que serão utilizados e a estrutura lógica da aplicação.

Nas próximas etapas serão realizadas a implementação das funcionalidades, os testes e os ajustes necessários para a versão final do sistema.
