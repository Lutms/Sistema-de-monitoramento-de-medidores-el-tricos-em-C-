# Sistema de Monitoramento de Medidores Elétricos

Projeto desenvolvido em C++ para a disciplina de Programação Avançada (CTG – UFPE).  
Sistema desenvolvido em C++ para simular o monitoramento de medidores elétricos, aplicando conceitos de Programação Avançada e Programação Orientada a Objetos.
O projeto permite o cadastro e gerenciamento de medidores, realização de leituras manuais e automáticas de potência ativa e reativa, armazenamento de histórico e visualização de dados por meio de gráficos textuais no terminal.

## Funcionalidades previstas

- Cadastro de medidores elétricos
- Remoção lógica de medidores (inativação)
- Listagem de medidores cadastrados
- Leitura manual de medidores
- Leitura automática periódica (simulada)
- Armazenamento de histórico de medições
- Exibição gráfica em ASCII no terminal

## Limitações Técnicas

Atualmente, o sistema realiza leituras de potência ativa e reativa de forma simulada, não havendo integração com medidores elétricos reais.
Os dados coletados são mantidos apenas em memória durante a execução do programa, não existindo persistência em arquivos ou banco de dados.

A interação com o usuário ocorre exclusivamente por meio do console, o que limita a usabilidade e a visualização das informações.
Além disso, o tratamento de exceções e a validação das entradas são básicos, atendendo apenas aos cenários principais de uso.

O uso de concorrência é restrito às leituras automáticas, sem a aplicação de mecanismos mais avançados de sincronização ou controle de acesso a dados compartilhados.
O sistema também não possui funcionalidades relacionadas à segurança, como autenticação ou controle de permissões.

## Possíveis Melhorias 
//(se eu tiver coragem de continuar)

Como evolução do projeto, pode-se implementar persistência de dados, permitindo que o histórico de leituras seja armazenado e recuperado entre execuções.
Outra melhoria relevante seria a integração com comunicação em rede, possibilitando a leitura de medidores reais por meio de protocolos como TCP/IP.

A adição de uma interface gráfica contribuiria para uma melhor experiência do usuário e visualização dos dados.
Também é possível aprimorar o tratamento de erros, a validação de entradas e a modularização do código, facilitando manutenção e testes.

Por fim, a implementação de testes automatizados, exportação de relatórios e mecanismos mais robustos de concorrência ampliaria a confiabilidade e a escalabilidade do sistema.
