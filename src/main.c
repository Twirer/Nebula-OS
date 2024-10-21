// main.c - Kernel básico para Nebula OS
void kernel_main(void) {
    // Endereço de memória para escrever na tela (modo texto VGA)
    char *video_memory = (char *) 0xb8000;

    // Mensagem para exibir
    const char *message = "Bem-vindo ao Nebula OS v0.1 Pre-Alpha!";
    
    // Iterar sobre a string e escrever cada caractere na memória de vídeo
    for (int i = 0; message[i] != '\0'; i++) {
        video_memory[i * 2] = message[i];     // Caractere
        video_memory[i * 2 + 1] = 0x07;       // Cor: 0x07 = fundo preto, texto cinza claro
    }
    
    // Loop infinito para manter o sistema ativo
    while (1) {}
}
