# Copilot Instructions for lucascosta

## Visão Geral
Este repositório é um portfólio de estudos em C++ para a disciplina de Computação para Engenharia (CPE) na UnB. O projeto é composto por exercícios, tarefas e exemplos de aula, organizados em subpastas por tema ou semana.

## Estrutura do Projeto
- `aulas/`: Exercícios e exemplos práticos de cada aula (ex: `aula1/`, `aula2/`, ...).
- `homework/`: Tarefas de casa, cada uma em sua subpasta (`tarefa01/`, `tarefa02/`, ...).
- Cada subpasta contém arquivos `.cpp` (código-fonte) e `.exe` (executáveis gerados).

## Convenções e Padrões
- **Comentários obrigatórios**: Os códigos das tarefas devem conter comentários explicativos em português, detalhando cada etapa da solução.
- **Identificação**: Tarefas devem conter nome e matrícula do aluno no início do arquivo.
- **Nomes de arquivos**: Para tarefas, siga o padrão `tarefacasa01<MATRICULA>.cpp`.
- **Sem laços em tarefas específicas**: Algumas tarefas (ex: cifra de César) proíbem o uso de laços e vetores, exigindo apenas variáveis escalares e condicionais.
- **Entrada/Saída**: Use sempre `cin`/`cout` para interação com o usuário. Mensagens devem ser claras e em português.

## Fluxo de Build e Execução
- **Compilação**: Utilize a task padrão do VS Code (atalho: Ctrl+Shift+B) para compilar o arquivo ativo:
  - Compilador: GCC (MSYS2)
  - Comando: `gcc.exe <arquivo>.cpp -o <arquivo>.exe`
  - O executável é gerado na mesma pasta do `.cpp`.
- **Execução**: Rode o `.exe` gerado diretamente pelo terminal ou pelo explorador de arquivos.
- **Limpeza de tela**: Use `system("cls")` para limpar a tela em ambientes Windows.

## Exemplos de Padrões Importantes
- **Cifra de César**: Veja `homework/tarefa01/tarefacasa01<MATRICULA>.cpp` para lógica de criptografia sem laços.
- **Contagem de vogais**: Veja `aulas/aula5/repeticao.cpp` e `aulas/aula6/contadorvogais.cpp` para exemplos de manipulação de strings e contagem de caracteres.
- **Jogos**: Exemplos de jogos simples em `aulas/aula4/adivinha.cpp` e `aulas/aula4/megasena.cpp`.

## Dicas para Agentes AI
- Respeite as restrições de cada tarefa (ex: não usar laços/vetores quando proibido).
- Sempre inclua comentários detalhados e mensagens de interação em português.
- Siga o padrão de nomes e organização das pastas.
- Para novos exercícios, crie uma subpasta adequada e mantenha o padrão de arquivos.

## Referências
- Veja o arquivo `texto.txt` em cada tarefa para o enunciado e regras específicas.
- Consulte o `README.md` para o propósito geral do repositório.

---
Essas instruções são específicas para este repositório e devem ser seguidas por agentes AI para garantir consistência e aderência às regras do curso.