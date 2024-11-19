Sistema de Exchange de Criptomoedas - Módulo Administrador
Descrição do Projeto
Este projeto implementa um sistema de exchange de criptomoedas com um módulo de administração. O módulo permite o gerenciamento de investidores e criptomoedas na plataforma. O administrador tem a capacidade de cadastrar e excluir investidores, cadastrar e excluir criptomoedas, e atualizar as cotações das criptomoedas. Este sistema é feito em C e mantém um controle dos dados utilizando estruturas de dados (structs) para armazenar as informações dos investidores e criptomoedas.

Funcionalidades
1. Login do Administrador
O administrador faz login utilizando um CPF e uma senha (padrão: CPF = admin, Senha = admin123). Após um login bem-sucedido, o menu principal de administração é exibido.

2. Cadastrar Investidor
A função cadastrarInvestidor() permite ao administrador cadastrar um novo investidor. O administrador pode fornecer o CPF, a senha e o saldo inicial em reais do investidor. A função verifica se o número máximo de investidores foi atingido e, em seguida, adiciona o investidor à lista de investidores.

3. Excluir Investidor
A função excluirInvestidor() permite ao administrador excluir um investidor existente, fornecendo o CPF do investidor a ser removido. O administrador confirma a exclusão, e a função busca o investidor na lista para removê-lo.

4. Cadastrar Criptomoeda
A função cadastrarCriptomoeda() permite ao administrador adicionar uma nova criptomoeda à plataforma. A criptomoeda é registrada com nome, cotação inicial, taxa de compra e taxa de venda. A função verifica se o número máximo de criptomoedas foi atingido antes de realizar o cadastro.

5. Excluir Criptomoeda
A função excluirCriptomoeda() permite ao administrador remover uma criptomoeda da plataforma. O administrador fornece o nome da criptomoeda a ser excluída, e a função busca a criptomoeda na lista e a remove.

6. Atualizar Cotações
A função atualizarCotacoes() simula uma atualização de cotações das criptomoedas. O sistema gera uma variação aleatória de até 10% (positiva ou negativa) para a cotação inicial de cada criptomoeda cadastrada. A atualização é feita para todas as criptomoedas registradas no sistema.

7. Menu do Administrador
O administrador pode acessar as funções acima através do menu principal. O menu oferece as seguintes opções:

Cadastrar Investidor
Excluir Investidor
Cadastrar Criptomoeda
Excluir Criptomoeda
Atualizar Cotações
Sair
8. Saída
Quando o administrador decide sair do programa, a função menuAdministrador() encerra a execução do sistema.

Como Compilar e Executar
Compilação
Para compilar o programa, siga os seguintes passos:

Abra o terminal ou prompt de comando.
Navegue até o diretório onde o arquivo do código fonte está salvo.
bash
cd /caminho/para/o/diretorio
Compile o código com o compilador GCC:
bash
gcc -o exchangeCripto sistema_exchange.c
Esse comando gerará um arquivo executável chamado exchangeCripto.
Execução
Para rodar o programa, use o seguinte comando:

bash
./exchangeCripto
Isso iniciará o programa e permitirá que o administrador faça login e acesse o menu para gerenciar os investidores e criptomoedas.

Como Usar
Login: Ao iniciar o programa, será solicitado que o administrador forneça um CPF e uma senha. Use as credenciais padrão:

CPF: admin
Senha: admin123
Menu Principal: Após o login bem-sucedido, o menu do administrador será exibido, com as opções para cadastrar e excluir investidores e criptomoedas, atualizar cotações e sair.

Cadastrar Investidores: O administrador pode adicionar novos investidores, especificando o CPF, a senha e o saldo inicial.

Cadastrar Criptomoedas: O administrador pode registrar novas criptomoedas, incluindo nome, cotação inicial e taxas de compra e venda.

Excluir Investidores e Criptomoedas: O administrador pode remover investidores e criptomoedas fornecendo as informações necessárias, como CPF ou nome da criptomoeda.

Atualizar Cotações: O administrador pode atualizar as cotações das criptomoedas com variações aleatórias.

Sair: O administrador pode sair do programa ao selecionar a opção "Sair" no menu.

Conclusão
Este sistema foi projetado para simular a administração de uma exchange de criptomoedas. O administrador tem a capacidade de gerenciar os investidores, as criptomoedas e suas cotações de maneira simples e eficiente.
