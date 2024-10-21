# Nebula OS

Nebula OS é um sistema operacional simples e leve, atualmente em versão pré-alpha. O objetivo do Nebula OS é oferecer uma base simples para o aprendizado e desenvolvimento de um sistema operacional com funcionalidades básicas, como login, painel shell, e conexão com a internet.

## Status do Projeto

**Versão**: 0.1 (Pre-Alpha)

Este projeto está em um estágio inicial de desenvolvimento, com funcionalidades básicas de login e painel shell.

## Funcionalidades

- Tela de login com verificação de usuário e senha.
- Painel shell básico para execução de comandos.
- Suporte para comandos básicos, como `conectar_internet` e `status_rede`.

## Como Compilar

Para compilar o Nebula OS, você precisará do compilador `clang` e do `qemu` para emular o sistema.

1. Clone o repositório:

    ```bash
    git clone https://github.com/seu-usuario/nebula-os.git
    cd nebula-os
    ```

2. Compile o sistema:

    ```bash
    clang -o nebula.bin shell.c -ffreestanding
    ```

3. Execute no QEMU:

    ```bash
    qemu-system-i386 -drive format=raw,file=nebula.bin
    ```

## Como Contribuir

Se você deseja contribuir para o Nebula OS, siga os passos abaixo:

1. Faça um fork do repositório.
2. Crie uma nova branch com suas mudanças: `git checkout -b minha-branch`.
3. Faça o commit das suas alterações: `git commit -m 'Minha nova funcionalidade'`.
4. Envie suas mudanças: `git push origin minha-branch`.
5. Abra um Pull Request.

## Licença

Este projeto está licenciado sob a [GNU General Public License v3.0](LICENSE).
