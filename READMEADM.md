Aqui está a versão ajustada do texto, organizada visualmente para melhor leitura e clareza:

---

# **Sistema de Exchange de Criptomoedas - Módulo Administrador**

## **Descrição do Projeto**
Este projeto implementa um sistema de exchange de criptomoedas com um módulo de administração. O módulo permite o gerenciamento de investidores e criptomoedas na plataforma. O administrador tem a capacidade de:
- Cadastrar e excluir investidores.
- Cadastrar e excluir criptomoedas.
- Atualizar as cotações das criptomoedas.

O sistema é desenvolvido em C e utiliza estruturas de dados (`struct`) para armazenar informações dos investidores e criptomoedas.

---

## **Funcionalidades**
### **1. Login do Administrador**
O administrador faz login utilizando um CPF e uma senha.  
- **Credenciais padrão**:
  - CPF: `admin`
  - Senha: `admin123`

Após o login, o menu principal de administração é exibido.

---

### **2. Cadastrar Investidor**
- Permite cadastrar novos investidores na plataforma.
- Informações necessárias:
  - CPF.
  - Senha.
  - Saldo inicial em reais.
- A função verifica se o limite máximo de investidores foi atingido antes do cadastro.

---

### **3. Excluir Investidor**
- Permite excluir um investidor existente pelo CPF.
- Busca o investidor na lista e remove após confirmação.

---

### **4. Cadastrar Criptomoeda**
- Permite adicionar novas criptomoedas à plataforma.
- Informações necessárias:
  - Nome da criptomoeda.
  - Cotação inicial.
  - Taxas de compra e venda.
- A função verifica se o limite máximo de criptomoedas foi atingido antes do cadastro.

---

### **5. Excluir Criptomoeda**
- Permite excluir uma criptomoeda existente pelo nome.
- Busca a criptomoeda na lista e a remove após confirmação.

---

### **6. Atualizar Cotações**
- Simula uma atualização de cotações das criptomoedas:
  - Gera variações aleatórias de até **±10%** para a cotação inicial de cada criptomoeda cadastrada.
- A atualização é feita para todas as criptomoedas registradas.

---

### **7. Menu do Administrador**
O menu principal exibe as seguintes opções:
1. Cadastrar Investidor.
2. Excluir Investidor.
3. Cadastrar Criptomoeda.
4. Excluir Criptomoeda.
5. Atualizar Cotações.
6. Sair.

---

### **8. Saída**
Ao selecionar a opção "Sair", o programa encerra a execução.

---

## **Como Compilar e Executar**
### **Compilação**
1. Abra o terminal ou prompt de comando.
2. Navegue até o diretório onde o código fonte está salvo:
   ```bash
   cd /caminho/para/o/diretorio
   ```
3. Compile o código usando o GCC:
   ```bash
   gcc -o exchangeCripto sistema_exchange.c
   ```
   Isso gerará um arquivo executável chamado `exchangeCripto`.

---

### **Execução**
Para executar o programa, utilize o comando:
```bash
./exchangeCripto
```
O programa será iniciado, e o administrador poderá fazer login para acessar o menu principal.

---

## **Como Usar**
### **1. Login**
Ao iniciar o programa, insira o CPF e a senha.  
- **Credenciais padrão para testes**:
  - CPF: `admin`
  - Senha: `admin123`

---

### **2. Menu Principal**
Após o login bem-sucedido, o menu do administrador será exibido com as seguintes opções:
- **Cadastrar Investidores**: Adicione novos investidores especificando o CPF, senha e saldo inicial.
- **Cadastrar Criptomoedas**: Registre novas criptomoedas, informando nome, cotação inicial e taxas.
- **Excluir Investidores e Criptomoedas**: Remova investidores ou criptomoedas informando os dados necessários.
- **Atualizar Cotações**: Realize atualizações aleatórias nas cotações de todas as criptomoedas cadastradas.
- **Sair**: Encerre o programa.

---

## **Nomes e Matrículas**
- Nome: **[Seu Nome Aqui]**
- Matrícula: **[Sua Matrícula Aqui]**

---

Se precisar de mais ajustes ou uma modificação no layout, me avise!
